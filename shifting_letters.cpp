class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = shifts.size();
        vector<long> postfix(n);
        postfix[n - 1] = shifts[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            postfix[i] = postfix[i + 1] + shifts[i];
        }
        for(int i = 0; i < s.size(); i++) {
            s[i] = ((s[i] + postfix[i] - 'a') % 26) + 'a';
        }
        return s;
    }
};

//another solution
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = shifts.size();
        int sum = 0;
        for(int i = n - 1; i >= 0; i--) {
            sum += shifts[i];
            sum = sum % 26;
            s[i] = (s[i] + sum - 'a') % 26 + 'a';
        }
        return s;
    }
};
