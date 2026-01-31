#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long myPow(int x, int n) {
        long long result = 1;
        long long base = x;

        while (n > 0) {
            if (n % 2 == 1) {
                result *= base;
            }
            base *= base;
            n /= 2;
        }
        return result;
    }
};

int main() {
    Solution obj;
    int x, n;

    cout << "Enter x and n: ";
    cin >> x >> n;

    cout << "Result: " << obj.myPow(x, n) << endl;
    return 0;
}
