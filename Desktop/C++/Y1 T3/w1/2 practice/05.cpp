#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    // Calculates array length: total memory size divided by size of one element
    int n = sizeof(arr) / sizeof(arr[0]);

    int firstValidIndex = 0;
    int lastValidIndex = n - 1; 
    int firstInvalidIndex = n; 

    cout << "First valid index: " << firstValidIndex << endl;
    cout << "Last valid index: " << lastValidIndex << endl;
    cout << "First invalid index: " << firstInvalidIndex << endl;

    return 0;
}