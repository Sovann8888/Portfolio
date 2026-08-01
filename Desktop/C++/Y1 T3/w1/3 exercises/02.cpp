#include <iostream>
using namespace std;

int main() {
    int x = 10;   // Creates x with value 10
    int *p = &x;  // Pointer p stores the memory address of x
    *p = 25;      // Changes the value at that address directly to 25

    // Displays final values
    cout << "x = " << x << endl;   // Outputs: x = 25
    cout << "*p = " << *p << endl; // Outputs: *p = 25

    return 0;
}