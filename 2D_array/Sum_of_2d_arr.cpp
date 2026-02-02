#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[4][4] = {
        {1, 7, 14, 6},
        {11, 15, 5, 10},
        {2, 4, 16, 3},
        {9, 13, 8, 12}
    };

    int sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Sum of all elements in the matrix: " << sum << endl;

    return 0;
}



// // Function
// #include <bits/stdc++.h>
// using namespace std;

// // Function to calculate sum of entire matrix
// int matrixSum(int arr[][4]) {
//     int sum = 0;

//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4; j++) {
//             sum += arr[i][j];
//         }
//     }

//     return sum;
// }

// int main() {

//     int arr[4][4] = {
//         {1, 7, 14, 6},
//         {11, 15, 5, 10},
//         {2, 4, 16, 3},
//         {9, 13, 8, 12}
//     };

//     cout << "Sum of all elements in the matrix: "
//          << matrixSum(arr) << endl;

//     return 0;
// }
