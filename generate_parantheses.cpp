class Solution {
public:
    vector<string> s;
    vector<string> generateParenthesis(int n) {
        string a = "";
        generateParantheses(a, n, n);
        return s;
    }
    void generateParantheses(string &a, int open, int close) {
        if(open == 0 && close == 0) {
            s.push_back(a);
            return;
        }
        if(open > 0) {
            a.push_back('(');
            generateParantheses(a, open - 1, close);
            a.pop_back();
        }
        if(close > 0) {
            if(open < close) {
                a.push_back(')');
                generateParantheses(a, open, close - 1);
                a.pop_back();
            }
        }
    }
};
