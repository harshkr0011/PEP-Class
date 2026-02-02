#include <bits/stdc++.h>
using namespace std;

void spiralPrint(int arr[][4], int row, int col) {
    int topRow = 0;
    int bottomRow = row - 1;
    int leftCol = 0;
    int rightCol = col - 1;

    while (topRow <= bottomRow && leftCol <= rightCol) {

        // Top row (left → right)
        for (int i = leftCol; i <= rightCol; i++) {
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        // Right column (top → bottom)
        for (int i = topRow; i <= bottomRow; i++) {
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;

        // Bottom row (right → left)
        if (topRow <= bottomRow) {
            for (int i = rightCol; i >= leftCol; i--) {
                cout << arr[bottomRow][i] << " ";
            }
            bottomRow--;
        }

        // Left column (bottom → top)
        if (leftCol <= rightCol) {
            for (int i = bottomRow; i >= topRow; i--) {
                cout << arr[i][leftCol] << " ";
            }
            leftCol++;
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

    spiralPrint(arr, 4, 4);

    return 0;
}
