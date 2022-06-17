class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> lis(n, 1);
        int len = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(nums[j] < nums[i]) {
                    lis[i] = max(1 + lis[j], lis[i]);
                }
            }
            len = max(len, lis[i]);
        }
        return len;
    }
};
