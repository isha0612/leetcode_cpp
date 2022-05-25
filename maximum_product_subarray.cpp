class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre = 1, pos = 1, ans = INT_MIN, n = nums.size();
        for(int i = 0; i < n; i++) {
            pre = (pre == 0) ? 1 : pre;
            pos = (pos == 0) ? 1 : pos;
            pre *= nums[i];
            pos *= nums[n - 1 - i];
            ans = max(ans, max(pre, pos));
        }
        return ans;
    }
};
