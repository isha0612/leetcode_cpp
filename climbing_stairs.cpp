class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)
            return 1;
        vector<int> dp(n + 1);
        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3; i <= n; i++) 
            dp[i] = dp[i-1] + dp[i-2];
        return dp[n];
    }
};

//another solution

class Solution {
public:
    vector<int> dp;
    int climbStairs(int n) {
        dp.resize(n + 1, -1);
        return find(n);
    }
    int find(int n) {
        if(n <= 1)
            return 1;
        if(dp[n] != -1)
            return dp[n];
        int one = find(n - 1);
        int two = find(n - 2);
        return dp[n] = one + two;
    }
};
