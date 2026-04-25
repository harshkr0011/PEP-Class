#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        backtrack(res, candidates, target, 0, {});
        return res;
    }
    void backtrack(vector<vector<int>>& res, vector<int>& candidates, int remain, int start, vector<int> path) {
        if (remain == 0) {
            res.push_back(path);
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i - 1]) continue;
            if (candidates[i] > remain) break;
            path.push_back(candidates[i]);
            backtrack(res, candidates, remain - candidates[i], i + 1, path);
            path.pop_back();
        }
    }
};