#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int *p = nullptr;

    for (int i = 0; i < 3; i++) {
        // 1. Allocate memory
        p = (int*) malloc(10 * sizeof(*p));

        // 2. Failure check
        if (p == nullptr) {
            cout << "Memory allocation failed for iteration " << i << endl;
            continue;
        }

        // 3. Use p safely
        p[0] = (i + 1) * 10;
        cout << "Iteration " << i << " value: " << p[0] << endl;

        // 4. Free p inside the loop so every allocation has a matching free
        free(p);
        p = nullptr; // Reset pointer before next loop iteration
    }

    return 0;
}