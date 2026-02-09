class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size();
        
        for (int i = 0; i < n - 2; i++) {
            // Early exit
            if (nums[i] > 0) break;
            
            // Skip duplicates for i
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int l = i + 1, r = n - 1;
            int target = -nums[i];
            
            while (l < r) {
                int s = nums[l] + nums[r];
                
                if (s == target) {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    
                    // Skip duplicates for l and r
                    while (l < r && nums[l] == nums[l - 1]) l++;
                    while (l < r && nums[r] == nums[r + 1]) r--;
                    
                } else if (s < target) {
                    l++;
                } else {
                    r--;
                }
            }
        }
        
        return res;
    }
};