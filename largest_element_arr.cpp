// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 45, 23, 89, 12};
//     int n = 5;

//     int largest = arr[0];  // assume first element is largest

//     for (int i = 1; i < n; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }

//     cout << "Largest element is: " << largest;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// class Solution {
//   public:
//     int largest(vector<int> &arr) {
//         int largest = arr[0];

//         for (int i = 1; i < arr.size(); i++) {
//             if (arr[i] > largest) {
//                 largest = arr[i];
//             }
//         }

//         return largest;
//     }
// };


// second largest
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest = -1, secondLargest = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            }
            else if (arr[i] < largest && arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }

        return secondLargest;
    }
};
