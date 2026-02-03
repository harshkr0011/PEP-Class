class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int p = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1])
                p++;
            else
                break;
        }
        if (p == 0)
            return false;
        int q = p;
        for (int j = p; j < n - 1; j++) {
            if (nums[j] > nums[j + 1])
                q++;
            else
                break;
        }

        if (q == n - 1 || q == p)
            return false;

        for (int k = q; k < n - 1; k++) {
            if (nums[k] >= nums[k + 1])
                return false;
        }
        return true;
    }
};