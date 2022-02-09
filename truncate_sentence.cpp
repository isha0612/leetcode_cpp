class Solution {
public:
    string truncateSentence(string s, int k) {
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
        str = "";
        for(int i = 0; i < k; i++) {
            str += v[i];
            if(i + 1 != k) str += " ";
        }
        return str;
    }
};
