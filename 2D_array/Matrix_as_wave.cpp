// Output should be as wave {1,11,2,4,15,700,14,5,16,3,10,6} 

#include <bits/stdc++.h>
using namespace std;

// Function to print column-wise wave
void wavePrint(int arr[][4]) {

    for (int j = 0; j < 4; j++) {

        // Even column → top to bottom
        if (j % 2 == 0) {
            for (int i = 0; i < 3; i++) {
                cout << arr[i][j] << " ";
            }
        }
        // Odd column → bottom to top
        else {
            for (int i = 2; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main() {

    int arr[3][4] = {
        {1, 700, 14, 6},
        {11, 15, 5, 10},
        {2, 4, 16, 3}
    };

    wavePrint(arr);

    return 0;
}

