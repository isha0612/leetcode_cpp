class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.size() < 2) return 0;
        stack<int> st;
        int n = s.size(), ans = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                st.push(i);
            }
            else {
                if(!st.empty() && s[st.top()] == '(') {
                   st.pop();
                } else {
                    st.push(i);
                }
            }
        }
        while(!st.empty()) {
            int end = st.top();
            ans = max(ans, n - end - 1);
            n = end;
            st.pop();
        }
        return max(ans, n);
    }
};
