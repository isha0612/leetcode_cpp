class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        if(find(nums.begin(), nums.end(), original) == nums.end())
            return original;
        do {
            original *= 2;
        } while(find(nums.begin(), nums.end(), original) != nums.end());
        return original;
    }
};
