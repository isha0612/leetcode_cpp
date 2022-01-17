class Solution {
public:
    bool isValid(string s) {
         unordered_map<char,int> m = {{'(', -1}, {'[', -2}, {'{', -3}, {')', 1}, {']', 2}, {'}', 3}};
         stack<char> st;
         for(char v : s) {
             if(m[v] < 0) 
                 st.push(v);
             else {
                 if(st.empty()) return false;
                 char top = st.top();
                 st.pop();
                 if(m[v] + m[top] != 0) return false;
             }
         }
         if(st.empty()) return true;
         return false;
    }
};
