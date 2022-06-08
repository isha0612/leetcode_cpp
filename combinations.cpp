class Solution {
public:
    vector<vector<int>> sol;
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        combination(n, k, temp, 1);
        return sol;
    }
    void combination(int n, int k, vector<int>& temp, int idx) {
        if(k == 0) {
            sol.push_back(temp);
            return;
        }
        for(int i = idx; i <= n; i++) {
            temp.push_back(i);
            combination(n, k-1, temp, i+1);
            temp.pop_back();
        }
    }
};
