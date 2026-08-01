#include <iostream>
#include <cstdlib> // Needed for calloc and free
using namespace std;

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    // Allocate memory for an array of n integers using calloc
    int *arr = (int*)calloc(n, sizeof(int));
    if (arr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1; // Exit with error code
    }

    cout << "\nMemory allocation successful for an array of " << n << " integers.\n";

    // 1. Print values BEFORE assigning new values
    cout << "Values BEFORE assignment: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2. Assign new values to the array elements
    for (int i = 0; i < n; ++i) {
        arr[i] = (i + 1) * 10; // Example assignment: 10, 20, 30...
    }

    // 3. Print values AFTER assigning new values
    cout << "Values AFTER assignment:  ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    free(arr);
    return 0;
}