#include <iostream>

int main() {
    // Declaring a 3D array
    int arr[3][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },
        {
            {19, 20, 21},
            {22, 23, 24},
            {25, 26, 27}
        }
    };

    // Accessing and printing elements of the 3D array
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                std::cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << std::endl;
            }
        }
    }

    return 0;
}
