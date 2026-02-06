class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;

        for (int i = 0; i < nums.size(); i++) {
            for (int m = i + 1; m < nums.size(); m++) {
                if (nums[i] + nums[m] == target) {
                    answer.push_back(i);
                    answer.push_back(m);
                }
            }
        }

        return answer;
    }
};