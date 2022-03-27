class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int c = 0;
        for(auto it : nums) {
            if(it != nums[0] && it != nums[nums.size() - 1])
                c++;
        }
        return c;
    }
};
