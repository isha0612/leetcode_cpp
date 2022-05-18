class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> sol;
        sort(nums.begin(), nums.end());
        int freq = 0, i;
        for(i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i + 1]) freq++;
            else {
                if(freq == 0) sol.push_back(nums[i]);
                freq = 0;
            }
        }
        if(i == nums.size() - 1 && nums[i] != nums[i - 1]) sol.push_back(nums[i]);
        return sol;
    }
};
