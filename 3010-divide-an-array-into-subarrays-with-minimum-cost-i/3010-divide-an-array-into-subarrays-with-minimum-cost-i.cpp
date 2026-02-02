class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int size = nums.size();
        if (size < 3)
            return 0;

        sort(nums.begin() + 1, nums.end());

        int ans = nums[0] + nums[1] + nums[2];

        return ans;
    }
};