class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex;
        vector<vector<int>> sol(n + 1, vector<int>());
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= i; j++) {
                if(j == 0 || j == i) {
                    sol[i].push_back(1);
                } else {
                    sol[i].push_back(sol[i-1][j-1] + sol[i-1][j]);
                }
            }
        }
        return sol[n];
    }
};
