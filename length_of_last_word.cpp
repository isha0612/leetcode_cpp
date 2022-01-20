class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> v;
        int i = 0;
        string a = "";
        while(i < s.length()) {
            if(s[i] == ' ' && i != 0 && s[i-1] != ' ') {
                v.push_back(a);
                a = "";
            }
            else if(s[i] != ' ') a.push_back(s[i]);
            i++;
            if(s[i] == '\0' && a.size()) v.push_back(a);
        }
        int len = v.size();
        return v[len - 1].length();
    }
};
