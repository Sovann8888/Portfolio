#include <iostream>
using namespace std;
// Trace the final values of a, b, and *p: int a = 4, b = 9; int *p = &a; *p += 3; p = &b; *p *= 2;.
int main() {
    int a = 4, b = 9;
    int *p = &a;

    *p += 3;
    p = &b;
    *p *= 2;

    cout << "Final value of a: " << a << endl; // a = 7
    cout << "Final value of b: " << b << endl; // b = 18
    cout << "Final value of *p: " << *p << endl; // *p = 18
    return 0;
}