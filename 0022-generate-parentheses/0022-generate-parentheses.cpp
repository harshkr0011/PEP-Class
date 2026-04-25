#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(res, "", 0, 0, n);
        return res;
    }
    void backtrack(vector<string>& res, string s, int l, int r, int n) {
        if (s.size() == 2 * n) {
            res.push_back(s);
            return;
        }
        if (l < n) backtrack(res, s + "(", l + 1, r, n);
        if (r < l) backtrack(res, s + ")", l, r + 1, n);
    }
};