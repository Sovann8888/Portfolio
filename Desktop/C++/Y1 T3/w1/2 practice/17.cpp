#include <iostream>
#include <cstdlib> // Needed for malloc and free
using namespace std;

int main() {
    int n;

    // 1. Validate n
    cout << "Enter the number of scores: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Number of scores must be greater than 0!" << endl;
        return 1;
    }

    // 2. Allocate memory for n scores
    double *scores = (double*) malloc(n * sizeof(double));

    // 3. Handle allocation failure
    if (scores == nullptr) {
        cout << "Error: Memory allocation failed!" << endl;
        return 1;
    }

    // 4. Input scores
    cout << "Enter " << n << " score(s):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Score " << (i + 1) << ": ";
        cin >> *(scores + i);
    }

    // 5. Compute sum, average, min, and max
    double sum = 0.0;
    double min = *scores; // Initialize min with the first score safely
    double max = *scores; // Initialize max with the first score safely

    for (int i = 0; i < n; i++) {
        double current = *(scores + i);
        sum += current;

        if (current < min) min = current;
        if (current > max) max = current;
    }

    double average = sum / n;

    // 6. Print results
    cout << "\n--- Score Analysis ---" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    // 7. Release memory and set pointer to NULL
    free(scores);
    scores = nullptr;

    return 0;
}