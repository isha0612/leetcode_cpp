class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return find(m, n, dp);
    }
    int find(int m, int n, vector<vector<int>> &dp) {
        if(n == 1 || m == 1) return 1;
        if(dp[m][n] != -1) return dp[m][n];
        int ans = find(m - 1, n, dp) + find(m, n - 1, dp);
        return dp[m][n] = ans;
    }
};
