class Solution {
public:
    string replaceDigits(string s) {
        for(int i = 1; i < s.size(); i++) {
            if(isdigit(s[i])) {
                int ch = s[i] - '0';
                char c = s[i - 1] + ch;
                s[i] = c;
            }
        }
        return s;
    }
};
