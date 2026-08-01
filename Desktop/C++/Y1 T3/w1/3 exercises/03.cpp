#include <iostream>
using namespace std;
// Write a function void setZero(int *value) and call it with the address of an integer variable.
void setZero(int* value) {
    *value = 0;
}
int main() {
    int num = 5;
    cout << "Before: " << num << endl;
    setZero(&num);
    cout << "After: " << num << endl;
    return 0;
}