// Problem statement
//Given a staircase of N steps and you can eighter climb 1 or 2 steps at a time.
// The task is to return the count of distinct ways to climb to the top
// Note: The order of the steps taken matters

#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int a = 1, b = 1;
        
        for(int i = 2; i <= n; i++){
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};

int main() {
    Solution sol;
    
    int n;
    cout << "Enter the number of stairs: ";
    if (cin >> n) {
        int result = sol.climbStairs(n);
                cout << "Number of distinct ways to climb " << n << " stairs: " << result << endl;
    } else {
        cout << "Invalid input." << endl;
    }

    return 0;
}