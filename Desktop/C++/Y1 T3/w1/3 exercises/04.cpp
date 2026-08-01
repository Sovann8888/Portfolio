#include <iostream> 
using namespace std;
//
int main() {
    int arr[4] = {1, 2, 3, 4};
    int *p = arr;

    cout << "*p = " << *p << endl;
    cout << "*(p + 1) = " << *(p + 1) << endl;
    cout << "*(p + 3) = " << *(p + 3) << endl;
    return 0;
}
