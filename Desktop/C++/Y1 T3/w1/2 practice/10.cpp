#include <iostream>
#include <cstdlib> // Needed for malloc and free
using namespace std;

int main() {
    int n;

    // 1. Input n
    cout << "Enter a positive integer n: ";
    cin >> n;

    // Validation 1: Check if input size is valid
    if (n <= 0) {
        cout << "Error: Number must be greater than 0!" << endl;
        return 1;
    }

    // 2. Allocate memory for n integers
    int *p = (int*) malloc(n * sizeof(int));

    // Validation 2: Check if memory allocation succeeded
    if (p == nullptr) {
        cout << "Error: Memory allocation failed!" << endl;
        return 1;
    }

    // 3. Input all values using pointer notation *(p + i)
    cout << "Enter " << n << " integer(s):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i << ": ";
        cin >> *(p + i);
    }

    // 4. Print all values using pointer notation *(p + i)
    cout << "\nArray elements: ";
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    // 5. Cleanup memory
    free(p);

    return 0;
}