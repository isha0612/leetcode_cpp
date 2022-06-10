class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size(), ans = 0, val = 0;
        unordered_set<int> set;
        while(j < n) {
            if(set.find(nums[j]) == set.end()) {
                val += nums[j];
                set.insert(nums[j++]);
                ans = max(ans, val);
            }
            else {
                val -= nums[i];
                set.erase(nums[i++]);
            }
        }
        return ans;
    }
};
