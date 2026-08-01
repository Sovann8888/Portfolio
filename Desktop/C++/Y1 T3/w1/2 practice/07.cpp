#include <iostream>
using namespace std;
// Write void addTen(int *value), demonstrate the call, and show the output.
void addTen(int *value) {
    *value += 10;
}

int main() {
    int num = 5; 
    cout << "Before addTen: " << num << endl;
    addTen(&num);
    cout << "After addTen: " << num << endl;
    return 0;
}