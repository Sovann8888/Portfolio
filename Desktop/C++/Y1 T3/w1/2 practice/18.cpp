#include <iostream>
#include <cstdlib> // Needed for malloc and free
using namespace std;

// Factory function: allocates memory and returns pointer (or NULL/nullptr)
int *createArray(int n) {
    if (n <= 0) return nullptr;
    return (int*) malloc(n * sizeof(int));
}

int main() {
    int n = 5;

    // OWNER: main() receives the memory pointer and takes ownership
    int *arr = createArray(n);

    // Check if allocation failed
    if (arr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // Process array
    for (int i = 0; i < n; i++) {
        *(arr + i) = (i + 1) * 10;
        cout << *(arr + i) << " ";
    }
    cout << endl;

    // OWNER RESPONSIBILITY: Release memory and reset pointer
    free(arr);
    arr = nullptr;

    return 0;
}