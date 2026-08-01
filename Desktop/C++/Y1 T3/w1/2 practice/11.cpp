#include <iostream>
#include <cstdlib> // Needed for malloc and free
using namespace std;
// Allocate n integers and calculate the sum and average. Reject n <= 0 before allocation.
int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Number must be greater than 0!" << endl;
        return 1;
    }

    int *p = (int*) malloc(n * sizeof(int));

    if (p == nullptr) {
        cout << "Error: Memory allocation failed!" << endl;
        return 1;
    }

    int sum = 0;
    cout << "Enter " << n << " integer(s):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i << ": ";
        cin >> *(p + i);
        sum += *(p + i);
    }

    double average = (double) sum / n;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    free(p);
    return 0;
}