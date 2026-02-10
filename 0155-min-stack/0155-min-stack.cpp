class MinStack {
private:
    vector<vector<int>> st;   // {value, current minimum}

public:
    MinStack() {
    }
    
    void push(int val) {
        // if stack is empty, min is val itself
        if (st.empty()) {
            st.push_back({val, val});
        } else {
            int currentMin = min(val, st.back()[1]);
            st.push_back({val, currentMin});
        }
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.back()[0];
    }
    
    int getMin() {
        return st.back()[1];
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */