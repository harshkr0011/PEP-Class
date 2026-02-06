class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        int n = nums.size() / 2;
        
        // Count frequencies
        for (int num : nums) {
            freqMap[num]++;
        }
        
        // Find majority element
        for (int num : nums) {
            if (freqMap[num] > n) {
                return num;
            }
        }
        
        return -1; // Shouldn't reach here per problem constraints
    }
};