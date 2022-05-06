class Solution {
public:
    string removeDuplicates(string s) {
        stack<pair<char, int>> st;
        for(int i = 0; i < s.size(); i++) {
            if(!st.empty() && st.top().first == s[i]) {
                st.pop();
            }
            else
                st.push({s[i], 1});
        }
        string ans = "";
        while(!st.empty()) {
            for(int i = 1; i <= st.top().second; i++) 
                ans += st.top().first;
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
