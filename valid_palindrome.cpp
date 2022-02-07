class Solution {
public:
    bool isPalindrome(string s) {
        if(!s.size()) return true;
        string a = "";
        int i = 0, j;
        while(i < s.size()) {
            if(isalnum(s[i])) {
                a.push_back(tolower(s[i]));
            }
            i++;
        }
        if(a.size() == 1) return true;
        i = 0, j = a.size() - 1;
        while(i < j) {
            if(a[i] != a[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
