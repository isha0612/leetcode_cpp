class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int c = 0, len = nums.size();
        for(int i = 0; i < len-1; i++) {
            for(int j = i+1; j < len; j++) {
                if(nums[i] - nums[j] == k || nums[j] - nums[i] == k) c++;
            }
        }
        return c;
    }
};
