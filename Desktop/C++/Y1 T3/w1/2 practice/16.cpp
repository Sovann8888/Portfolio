#include <iostream>
#include <cstdlib> // Needed for malloc and free
using namespace std;

int main() {
    int n = 3;

    // 1. ALLOCATION & 3. OWNER (p is the owning pointer that holds the memory address)
    int *p = (int*) malloc(n * sizeof(int));

    // 2. FAILURE CHECK (Verifies memory was successfully assigned before use)
    if (p == nullptr) {
        cout << "Error: Memory allocation failed!" << endl;
        return 1;
    }

    // 5. VALID-USE PERIOD STARTS HERE
    // 4. BOUNDS (The loop condition 'i < n' keeps memory access within safe bounds)
    for (int i = 0; i < n; i++) {
        *(p + i) = (i + 1) * 10;
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
    // 5. VALID-USE PERIOD ENDS HERE

    // 6. MATCHING FREE (Releases the allocated memory back to the system)
    free(p);

    // 7. NULL ASSIGNMENT (Resets the pointer so it no longer points to freed memory)
    p = nullptr;

    return 0;
}