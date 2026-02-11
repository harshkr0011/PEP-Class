class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> mp;
        stack<int> st;

        // Build next greater map using nums2
        for(int i = nums2.size() - 1; i >= 0; i--) {
            
            while(!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            if(st.empty()){
                mp[nums2[i]] = -1;
            }
            else{
                mp[nums2[i]] = st.top();
            }

            st.push(nums2[i]);
        }

        // Prepare result using nums1
        vector<int> result;
        for(int i = 0; i < nums1.size(); i++){
            result.push_back(mp[nums1[i]]);
        }

        return result;
    }
};
