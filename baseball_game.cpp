class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(int i = 0; i < ops.size(); i++) {
            if(ops[i] == "+") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b);
                st.push(a);
                st.push(a + b);
            }
            else if(ops[i] == "D") {
                st.push(st.top() * 2);
            }
            else if(ops[i] == "C") {
                st.pop();
            }
            else {
                st.push(stoi(ops[i]));
            }
        }
        int ans = 0;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
