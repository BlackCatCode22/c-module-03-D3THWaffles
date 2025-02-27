#include <iostream>
using namespace std;

int main() {

    int arr[4] = {4,8,12,16 };

    int* myPtr = arr;

    for (int i = 0; i < 4; ++i) {
        cout << "\n The address of arr[" << i << "] is: " << (myPtr + i) << "\n";
        cout << "\nn The value of arr[" << i << "] is: " << *(myPtr + i) << "\n";
    }



    return 0;
}