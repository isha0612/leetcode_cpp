class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while(i < j) {
            int mid = (i + j) / 2;
            if(nums[mid] > nums[mid + 1]) {
                j = mid;
            }
            else if(nums[mid] < nums[mid + 1]) {
                i = mid + 1;
            }
        }
        return i;
    }
};
