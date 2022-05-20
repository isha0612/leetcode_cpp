class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return find(m - 1, n - 1, dp, obstacleGrid);
    }
    
    int find(int m, int n, vector<vector<int>> &dp, vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[m][n]) return 0;
        if(n == 0 && m == 0) return 1;
        if(dp[m][n] != -1) return dp[m][n];
        int ans = 0;
        if(m > 0) ans += find(m - 1, n, dp, obstacleGrid);
        if(n > 0) ans += find(m, n - 1, dp, obstacleGrid);
        return dp[m][n] = ans;
    }
};
