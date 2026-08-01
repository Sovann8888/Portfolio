#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    cout << "first valid number" << " = " << *p << endl;
    cout << "last valid number" << " = " << *(p + 4) << endl;
    cout << "invalid number" << " = " << *(p + 5) << endl; // This will lead to undefined behavior
    return 0;
}