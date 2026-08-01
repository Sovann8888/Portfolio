#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int *a = (int*) malloc(5 * sizeof(*a));

    // 1. Fix: Check if allocation succeeded
    if (a == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // 2. Fix: Correct loop bound (i < 5)
    for (int i = 0; i < 5; i++) {
        a[i] = i;
    }

    // 3. Fix: Print data BEFORE freeing memory
    cout << a[0] << endl;

    // 4. Fix: Free memory ONCE and reset pointer to NULL
    free(a);
    a = nullptr;

    return 0;
}