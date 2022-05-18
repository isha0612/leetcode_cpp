class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int freq = 0, i;
        for(i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i + 1]) freq++;
            else {
                if(freq == 0) return nums[i];
                freq = 0;
            }
        }
        return nums[i];
    }
};
