class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        int ans = INT_MAX;
        while(i <= j) {
            int mid = (i + j) / 2;
            if(nums[mid] >= nums[i]) {
                ans = min(ans, nums[i]);
                i = mid + 1;
            } 
            else  {
                ans = min(ans, nums[mid]);
                j = mid - 1;
            }
        }
        return ans;
    }
};
