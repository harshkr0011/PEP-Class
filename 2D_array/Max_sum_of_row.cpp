// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int arr[4][4] = {
//         {1, 7, 14, 6},
//         {11, 15, 5, 10},
//         {2, 4, 16, 3},
//         {9, 13, 8, 12}
//     };

//     int maxSum = INT_MIN;
//     int rowIndex = -1;

//     for (int i = 0; i < 4; i++) {
//         int sum = 0;

//         for (int j = 0; j < 4; j++) {
//             sum += arr[i][j];
//         }

//         if (sum > maxSum) {
//             maxSum = sum;
//             rowIndex = i;
//         }
//     }

//     cout << "Row with maximum sum is at index: " << rowIndex << endl;

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// // Function to return index of row with maximum sum
// int maxRowSumIndex(int arr[][4]) {

//     int maxSum = 0;
//     int rowIndex = 0;

//     // Calculate sum of first row
//     for (int j = 0; j < 4; j++) {
//         maxSum += arr[0][j];
//     }

//     // Start checking from second row
//     for (int i = 1; i < 4; i++) {
//         int sum = 0;

//         for (int j = 0; j < 4; j++) {
//             sum += arr[i][j];
//         }

//         if (sum > maxSum) {
//             maxSum = sum;
//             rowIndex = i;
//         }
//     }

//     return rowIndex;
// }

// int main() {

//     int arr[4][4] = {
//         {1, 700, 14, 6},
//         {11, 15, 5, 10},
//         {2, 4, 16, 3},
//         {9, 13, 8, 12}
//     };

//     int index = maxRowSumIndex(arr);

//     cout << "Row with maximum sum is at index: " << index << endl;

//     return 0;
// }



// Max Column sum
#include <bits/stdc++.h>
using namespace std;

// Function to return index of column with maximum sum
int maxColSumIndex(int arr[][4]) {

    int maxSum = INT_MIN;
    int colIndex = -1;

    // Traverse each column
    for (int j = 0; j < 4; j++) {
        int sum = 0;

        // Sum of current column
        for (int i = 0; i < 3; i++) {
            sum += arr[i][j];
        }

        // Update max column sum
        if (sum > maxSum) {
            maxSum = sum;
            colIndex = j;
        }
    }

    return colIndex;
}

int main() {

    int arr[3][4] = {
        {1, 700, 14, 6},
        {11, 15, 5, 10},
        {2, 4, 16, 3}
    };

    int index = maxColSumIndex(arr);

    cout << "Column with maximum sum is at index: " << index << endl;

    return 0;
}
