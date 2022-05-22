class Solution {
public:
    bool palindrome(string s) {
        int n = s.size();
        for(int i = 0; i < n / 2; i++) {
            if(s[i] != s[n - i - 1]) 
                return false;
        }
        return true;
    }
    int countSubstrings(string s) {
        int c = 0, n = s.size();
        for(int i = 0; i < n; i++) {
            for(int j = 1; j <= n - i; j++) {
                string str = s.substr(i, j);
                if(palindrome(str))
                    c++;
            }
        }
        return c;
    }
};
