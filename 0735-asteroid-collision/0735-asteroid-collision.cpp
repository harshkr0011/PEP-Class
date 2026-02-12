class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st; // Using vector as a stack for easier output

        for (int curr : asteroids) {
            bool exploded = false;

            // Collision only happens if:
            // 1. Stack is not empty
            // 2. Top of stack is moving RIGHT (+)
            // 3. Current asteroid is moving LEFT (-)
            while (!st.empty() && st.back() > 0 && curr < 0) {
                
                if (abs(st.back()) < abs(curr)) {
                    // Top of stack is smaller: it explodes, keep checking
                    st.pop_back();
                    continue; 
                } 
                else if (abs(st.back()) == abs(curr)) {
                    // Both are same size: both explode
                    st.pop_back();
                    exploded = true;
                    break;
                } 
                else {
                    // Current is smaller: current explodes
                    exploded = true;
                    break;
                }
            }

            if (!exploded) {
                st.push_back(curr);
            }
        }

        return st;
    }
};