class Solution {
public:
    int dp[201][201];
    int minTotal(vector<vector<int>>& triangle, int i, int j) {
        if(i == triangle.size())
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        int ans = triangle[i][j] + minTotal(triangle, i+1, j);
        ans = min(ans, triangle[i][j] + minTotal(triangle, i+1, j+1));
        return dp[i][j] = ans;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp, -1, sizeof(dp));
        return minTotal(triangle, 0, 0);
    }
};
