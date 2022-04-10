class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(auto v : logs) {
            if(v == "../") {
                if(!st.empty()) st.pop();
            }
            else if(v == "./") {
                continue;
            }
            else {
                st.push(v);
            }
        }
        int ans = 0;
        while(!st.empty()) {
            ans++;
            st.pop();
        }
        return ans;
    }
};

//another solution
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans = 0;
        for(auto v : logs) {
            if(v == "../") {
                if(ans > 0) ans -= 1;
            }
            else if(v == "./") {
                continue;
            }
            else {
                ans += 1;
            }
        }
        return ans;
    }
};
