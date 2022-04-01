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

//another solution
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i = 0, n = nums.size();
        int dir = 0, ans = 0;
        while(i < n - 1) {
            if(nums[i] > nums[i + 1]) dir = -1;
            else if(nums[i] < nums[i + 1]) dir = 1;
            if(ans == 0) ans = dir;
            else if (dir != ans) return false;
            i++;
        }
        return true;
    }
};
