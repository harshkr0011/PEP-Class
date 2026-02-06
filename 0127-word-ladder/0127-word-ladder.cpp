class Solution {
public:
    int ladderLength(string s, string e, vector<string>& a) {
        int n = a.size();
        queue<pair<string, int>> q;
        q.push({s, 1});
        unordered_set<string> st(a.begin(), a.end());
        st.erase(s);
        while(!q.empty()) {
            auto p = q.front();
            q.pop();
            if(p.first == e) { return p.second; }
            for(int i=0; i<p.first.size(); i++) {
                string word = p.first;
                for(char c='a'; c<='z'; c++) {
                    word[i] = c;
                    if(st.count(word)) {
                        st.erase(word);
                        q.push({word, p.second + 1});
                    }
                }
            }
        }
        return 0;
    }
};