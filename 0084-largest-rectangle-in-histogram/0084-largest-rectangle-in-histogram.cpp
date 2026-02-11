class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        vector<int> left(n), right(n);
        stack<int> st;

        // 🔹 Find Previous Smaller Element (Left Boundary)
        for(int i = 0; i < n; i++){
            
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }

            if(st.empty()){
                left[i] = -1;   // no smaller on left
            }
            else{
                left[i] = st.top();
            }

            st.push(i);
        }

        // Clear stack
        while(!st.empty()) st.pop();

        // 🔹 Find Next Smaller Element (Right Boundary)
        for(int i = n - 1; i >= 0; i--){
            
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }

            if(st.empty()){
                right[i] = n;   // no smaller on right
            }
            else{
                right[i] = st.top();
            }

            st.push(i);
        }

        // 🔹 Calculate Maximum Area
        int maxArea = 0;

        for(int i = 0; i < n; i++){
            int width = right[i] - left[i] - 1;
            int area = heights[i] * width;
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};
