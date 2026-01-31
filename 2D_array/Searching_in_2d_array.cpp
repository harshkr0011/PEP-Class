#include<bits/stdc++.h>
using namespace std;

// Function to check whether target element is present in 2D array
bool searchElement(int arr[][4], int target) {

    // Traversing each row
    for (int i = 0; i < 4; i++) {

        // Traversing each column
        for (int j = 0; j < 4; j++) {

            // If target element is found
            if (arr[i][j] == target) {
                return true;
            }
        }
    }

    // If element is not found after full traversal
    return false;
}

int main() {

    // Declaring and initializing 2D array
    int arr[4][4] = {
        {1, 7, 14, 6},
        {11, 15, 5, 10},
        {2, 4, 16, 3},
        {9, 13, 8, 12}
    };

    int key = 9;

    // Calling the function and checking result
    if (searchElement(arr, key))
        cout << "Element present" << endl;
    else
        cout << "Element not present" << endl;

    return 0;
}
