#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i - 1] > arr[i])
                return false;
        }
            return true;
    }
};

// Driver Code
int main() {
    Solution sol;

    vector<int> arr1 = {1, 2, 3, 4,7, 5};
    if (sol.isSorted(arr1))
        cout << "Arr1 is sorted." << endl;
    else
        cout << "Arr1 is NOT sorted." << endl;
    return 0;
}