#include <iostream>
#include <cstdlib> // Needed for malloc and free
using namespace std;

// Function to calculate the sum of array elements
int sumArray(const int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i); // Read each value and add to sum
    }
    return sum;
}

int main() {
    int n;

    // 1. Input the array size
    cout << "Enter a positive integer n: ";
    cin >> n;

    // Validation: Check if n is positive
    if (n <= 0) {
        cout << "Error: Number must be greater than 0!" << endl;
        return 1;
    }

    // 2. Dynamically allocate memory for n integers
    int *p = (int*) malloc(n * sizeof(int));

    // Validation: Check if memory allocation succeeded
    if (p == nullptr) {
        cout << "Error: Memory allocation failed!" << endl;
        return 1;
    }

    // 3. Input array values
    cout << "Enter " << n << " integer(s):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i << ": ";
        cin >> *(p + i);
    }

    // 4. Call sumArray function with the dynamically allocated array
    int total = sumArray(p, n);
    cout << "\nSum of the array: " << total << endl;

    // 5. Cleanup memory
    free(p);

    return 0;
}