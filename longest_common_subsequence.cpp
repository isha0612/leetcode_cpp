class Solution {
public:
    int dp[1001][1001];
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size(), n = text2.size();
        memset(dp, -1, sizeof(dp));
        return find(text1, text2, m, n);
    }
    int find(string& text1, string& text2, int m, int n) {
        if(m == 0 || n == 0)
            return 0;
        if(text1[m-1] == text2[n-1]) {
            return dp[m][n] = 1 + find(text1, text2, m - 1, n - 1);
        }
        if(dp[m][n] != -1)
            return dp[m][n];
        return dp[m][n] = max(find(text1, text2, m, n - 1), find(text1, text2, m - 1, n));
    }
};
