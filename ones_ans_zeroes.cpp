class Solution {
public:
    int dp[601][101][101];
    int findZero(string s) {
        int c = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '0')
                c++;
        }
        return c;
    }
    int findOne(string s) {
        int c = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1')
                c++;
        }
        return c;
    }
    int helper(vector<string>& strs, int m, int n, int idx) {
        if(idx >= strs.size() || (m == 0 && n == 0))
            return 0;
        if(dp[idx][m][n] != -1)
            return dp[idx][m][n];
        int zeroes = findZero(strs[idx]);
        int ones=findOne(strs[idx]);
        int ans1 = 0;
        if(zeroes <= m && ones <= n) {
            ans1 = 1 + helper(strs, m - zeroes, n - ones, idx + 1);
        }
        int ans2 = helper(strs, m, n, idx + 1);
        if(ans1 > ans2) {
            return dp[idx][m][n] = ans1;
        }
        return dp[idx][m][n] = ans2;
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp, -1, sizeof(dp));
        return helper(strs, m, n, 0);
    }
};
