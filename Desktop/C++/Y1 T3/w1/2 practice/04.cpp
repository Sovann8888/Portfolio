
// Write the values of *p, *(p + 1), and *(p + 3). Briefly explain how pointer arithmetic selects array elements.
// int arr[4] = {3, 6, 9, 12};
// int *p = arr;
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {3, 6, 9, 12};
    int *p = arr;

    cout << "*p = " << *p << endl;
    cout << "*(p + 1) = " << *(p + 1) << endl;
    cout << "*(p + 3) = " << *(p + 3) << endl;

    return 0;
}