class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> sol;
        if(!digits.size()) return sol;
        possibleCombination(digits, 0, sol, "");
        return sol;
    }
    vector<string> v = {".", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void possibleCombination(string digits, int idx, vector<string> &sol, string s) {
        if(idx == digits.length()) {
            sol.push_back(s);
            return;
        }
        string a = v[digits[idx] - '1'];
        for(int i = 0; i < a.size(); i++) {
            possibleCombination(digits, idx+1, sol, s+a[i]);
        }
    }
};
