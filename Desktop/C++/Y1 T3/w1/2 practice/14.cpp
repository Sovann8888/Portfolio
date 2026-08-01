#include <iostream>
#include <cstdlib> // Needed for malloc and free
using namespace std;
// Write a program that allocates, processes, releases, and then assigns NULL to the owning pointer. Add comments marking the lifetime start, valid-use period, and lifetime end.
int main() {
    int n = 3;

    // Lifetime Start: Memory allocation
    int *p = (int*) malloc(n * sizeof(int));

    if (p == nullptr) {
        cout << "Error: Memory allocation failed!" << endl;
        return 1;
    }

    // Valid-Use Period: Memory is active and safe to process
    for (int i = 0; i < n; i++) {
        *(p + i) = (i + 1) * 10;
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    // Lifetime End: Memory release and setting pointer to NULL
    free(p);
    p = nullptr;

    return 0;
}