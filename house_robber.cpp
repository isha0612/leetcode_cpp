class Solution {
public:
    vector<int> dp;
    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n, -1);
        return find(nums, n-1);
    }
    int find(vector<int>& nums, int n) {
        if(n < 0)
            return 0;
        if(dp[n] != -1)
            return dp[n];
        int be = nums[n] + find(nums, n - 2);
        int nottobe = find(nums, n - 1);
        return dp[n] = max(be, nottobe);
    }
};
