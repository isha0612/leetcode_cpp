class Solution {
public:
    int dp[10010];
    int find(vector<int> &a, int n) {
        if(n == 0) 
            return 0;
        int ans = INT_MAX;
        if(dp[n] != -1) return dp[n];
        for(int i : a) {
            if(n - i >= 0)
                ans = min(ans + 0LL, find(a, n - i) + 1LL);
        }
        return dp[n] = ans;
    }
    int coinChange(vector<int>& a, int n) {
        memset(dp, -1, sizeof(dp));
        int ans = find(a, n);
        return ans == INT_MAX ? -1 : ans;
    }
};
