class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto maxi = max_element(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            if(maxi - nums.begin() != i && nums[i] * 2 > *maxi)
                return -1;
        }
        return maxi - nums.begin();
    }
};
