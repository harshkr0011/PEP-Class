#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> cur;
        vector<bool> used(nums.size(), false);
        backtrack(nums, cur, res, used);
        return res;
    }

    void backtrack(vector<int>& nums, vector<int>& cur, vector<vector<int>>& res, vector<bool>& used) {
        if (cur.size() == nums.size()) {
            res.push_back(cur);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (used[i] || (i > 0 && nums[i] == nums[i-1] && !used[i-1]))
            continue;
            used[i] = true;
            cur.push_back(nums[i]);
            backtrack(nums, cur, res, used);
            cur.pop_back();
            used[i] = false;
        }
    }
};