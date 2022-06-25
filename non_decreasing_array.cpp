class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size(), prev = INT_MIN, ans = 0;
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] <= nums[i + 1])
                prev = nums[i];
            else {
                if(nums[i + 1] < prev) {
                    nums[i + 1] = nums[i];
                }
                ans++;
            }
        }
        return ans <= 1;
    }
};
