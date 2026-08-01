#include <iostream>
#include <cstdlib> // Needed for malloc and free
using namespace std;
// Input a positive integer n, allocate an integer array of length n with malloc, and print a clear message if allocation fails.
int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    // Allocate memory for an array of n integers
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1; // Exit with error code
    }

    // If allocation is successful, print a success message
    cout << "Memory allocation successful for an array of " << n << " integers." << endl;   
    free(arr); // Free the allocated memory
    return 0; 
}