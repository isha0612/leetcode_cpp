class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        unordered_map <int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]] = i;
        }
        auto it = m.find(target);
        if(it != m.end()) return it->second;
        else {
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] > target) return i;
            }
            return nums.size();
        }
    }
};
