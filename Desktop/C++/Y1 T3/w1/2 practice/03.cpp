#include <iostream>
using namespace std;
// Write void setZero(int *value). In main, create an integer, call the function using its address, and print the result.
void setZero(int *value) {
    *value = 0;
}

int main() {
    int num = 8;
    cout << "Before setZero: " << num << endl;
    setZero(&num);
    cout << "After setZero: " << num << endl;   
    return 0;
}