#include <iostream>
using namespace std;
int main() {
    // Input a positive integer n, allocate an integer array of length n with malloc, and print aclear message if allocation fails.
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Number must be greater than 0!" << endl;
        return 1;
    }

    int *p = (int *) calloc (n, sizeof(int));
    if (p == nullptr) {
        cout << "Error: Memory allocation failed!" << endl;
        return 1;
    }

    cout << "Memory allocation successful!" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i << ": " << *(p + i) << endl;
    }
    free(p);
    return 0;
}