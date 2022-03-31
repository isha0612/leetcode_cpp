class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> sol(n, vector<int>());
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                if(j == 0 || j == i) sol[i].push_back(1);
                else {
                    sol[i].push_back(sol[i-1][j-1] + sol[i-1][j]);
                }
            }
        }
        return sol;
    }
};
