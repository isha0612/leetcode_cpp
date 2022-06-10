class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size(), i = 0, ans = 0, curr = 0;
        while(i < n - 1) {
            if(nums[i] < nums[i+1]) {
                curr++;
            }
            else {
                ans = max(ans, curr + 1);
                curr = 0;
            }
            i++;
        }
        ans = max(ans, curr + 1);
        return ans;
    }
};
