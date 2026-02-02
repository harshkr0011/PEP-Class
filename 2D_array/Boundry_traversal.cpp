#include <bits/stdc++.h>
using namespace std;

void boundaryTraversal(int arr[][4], int row, int col) {

    // 1️⃣ Top row
    for (int j = 0; j < col; j++) {
        cout << arr[0][j] << " ";
    }

    // 2️⃣ Right column
    for (int i = 1; i < row; i++) {
        cout << arr[i][col - 1] << " ";
    }

    // 3️⃣ Bottom row (only if more than one row)
    if (row > 1) {
        for (int j = col - 2; j >= 0; j--) {
            cout << arr[row - 1][j] << " ";
        }
    }

    // 4️⃣ Left column (only if more than one column)
    if (col > 1) {
        for (int i = row - 2; i > 0; i--) {
            cout << arr[i][0] << " ";
        }
    }
}

int main() {

    int arr[4][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    boundaryTraversal(arr, 4, 4);
    return 0;
}
