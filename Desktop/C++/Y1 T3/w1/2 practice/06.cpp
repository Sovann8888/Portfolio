#include <iostream>
using namespace std;
// Trace every statement. State the final values of a, b, and *p, and identify what p points to at the end.
// int a = 4, b = 9;
// int *p = &a;
// *p += 3;
// p = &b;
// *p *= 2;

int main() {
    int a = 4, b = 9;
    int *p = &a;
    *p += 3;
    p = &b;
    *p *= 2;
    cout << "a = " << a << ", b = " << b << ", *p = " << *p << endl;
    cout << "p points to: " << p << endl;
}