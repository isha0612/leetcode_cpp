class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return pathSearch(m, n, grid, dp);
    }
    
    int pathSearch(int m, int n, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        if(m == 1 && n == 1) 
            return grid[0][0];
        if(m == 0 || n == 0)
            return INT32_MAX;
        if(dp[m][n] != -1)
            return dp[m][n];
        int ans1 = pathSearch(m-1, n, grid, dp);
        int ans2 = pathSearch(m, n-1, grid, dp);
        return dp[m][n] = grid[m-1][n-1] + min(ans1, ans2);
    }
};
