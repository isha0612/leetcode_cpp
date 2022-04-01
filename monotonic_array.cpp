class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i = 0, n = nums.size();
        bool increasing = false, decreasing = false;
        while(i < n - 1) {
            if(nums[i] > nums[i + 1]) decreasing = true;
            else if(nums[i] < nums[i + 1]) increasing = true;
            i++;
        }
        if(increasing && decreasing) return false;
        return true;
    }
};
