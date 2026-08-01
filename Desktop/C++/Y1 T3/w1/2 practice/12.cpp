#include <iostream>
#include <cstdlib> // Needed for malloc and free
using namespace std;
// Allocate n integers and find the minimum and maximum in one traversal. State how you initialize min and max safely.
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

    cout << "Enter " << n << " integer(s):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i << ": ";
        cin >> *(p + i);
    }

    // Initialize min and max with the first element
    int min = *p;
    int max = *p;

    // Find min and max in one traversal
    for (int i = 1; i < n; i++) {
        if (*(p + i) < min) {
            min = *(p + i);
        }
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    free(p);
    return 0;   
}