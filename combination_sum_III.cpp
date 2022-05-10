class Solution {
public:
    vector<vector<int>> sol;
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> res;
        backtrack(1, k, n, res);
        return sol;
    }
    
    void backtrack(int idx, int k, int n, vector<int> &res) {
        if(k == 0 && n == 0) {
            sol.push_back(res);
            return;
        }
        if(n < 0 || k < 0) {
            return;
        }
        for(int i = idx; i <= 9; i++) {
            res.push_back(i);
            backtrack(i + 1, k - 1, n - i, res);
            res.pop_back();
        }
    }
};
