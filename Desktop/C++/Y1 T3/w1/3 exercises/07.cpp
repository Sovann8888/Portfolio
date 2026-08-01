#include <iostream>
using namespace std;
void addTen(int *value) {
    *value =+ 10;

}

int main() {
    int num = 5;
    cout << "Before value: " << num << endl;
    addTen(&num);
    cout << "After value: " << num << endl;
    return 0;
}