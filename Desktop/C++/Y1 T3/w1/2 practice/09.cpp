#include <iostream>
#include <cstdlib> // Needed for malloc and free
using namespace std;
// Repeat Exercise 8 with calloc. Print every element before assigning new values, then explain the observed initialization.
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

    cout << "Memory allocation successful for an array of " << n << " integers." << endl;
    cout << "Initial values of the array elements: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " " << endl; // Print each element before assigning new values
    }
    cout << endl;
    free(arr);
    return 0;
}