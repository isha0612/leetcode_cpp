class Solution {
public:
    vector<vector<int>> sol;
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> res;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, 0, target, res);
        return sol;
    }
    
    void backtrack(vector<int> &can, int idx, int target, vector<int> &res) {
        if(target < 0)
            return;
        if(target == 0) {
            sol.push_back(res);
            return;
        }
        for(int i = idx; i < can.size(); i++) {
            if(i > idx && can[i] == can[i - 1]) continue;
            res.push_back(can[i]);
            backtrack(can, i + 1, target - can[i], res);
            res.pop_back();
        }
    }
};
