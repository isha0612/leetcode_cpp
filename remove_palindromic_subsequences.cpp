class Solution {
public:
    int removePalindromeSub(string s) {
        if(s == "")
            return 0;
        string str = s;
        reverse(s.begin(), s.end());
        if(str == s)
            return 1;
        return 2;
    }
};
