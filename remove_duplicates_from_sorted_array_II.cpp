class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return nums.size();
        int l = 0, r = 2;
        while(r < n) {
            if(nums[l] != nums[r]) {
                nums[l+2] = nums[r];
                l++;
            }
            r++;
        }
        return l + 2;
    }
};
