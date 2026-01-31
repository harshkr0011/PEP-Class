#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumArray(vector<int>& arr, int n) {
        if (n == 0)
        return 0;
        return arr[n - 1] + sumArray(arr,n-1);
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 7, 5};
    cout << "Sum of array: " << sol.sumArray(arr, arr.size()) << endl;
    return 0;
}
