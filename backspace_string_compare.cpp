class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;
        for(auto v: s) {
            if(v == '#') {
                if(!s1.empty()) s1.pop();
            }
            else {
                s1.push(v);
            }
        }
        for(auto v: t) {
            if(v == '#') {
                if(!s2.empty()) s2.pop();
            }
            else {
                s2.push(v);
            }
        }
        string a = "", b = "";
        while(!s1.empty()) {
            a.push_back(s1.top());
            s1.pop();
        }
        while(!s2.empty()) {
            b.push_back(s2.top());
            s2.pop();
        }
        return a == b;
    }
};
