class Solution {
public:
    string reverseWords(string s) {
        vector <string> v;
        string str = "";
        int i = 0;
        for(i = 0; i < s.size(); i++) {
            if(s[i] == ' ' && i != 0 && s[i - 1] != ' ') {
                v.push_back(str);
                str = "";
            }
            else if(s[i] != ' ') str += s[i];
        }
        if(str.size()) v.push_back(str);
        reverse(v.begin(), v.end());
        str = "";
        for(int i = 0; i < v.size(); i++) {
            str += v[i];
            if(i + 1 != v.size()) str += " ";
        }
        return str;
    }
};
