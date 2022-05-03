class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> t = nums;
        sort(nums.begin(), nums.end());
        int lo = 0, hi = t.size() - 1;
        while(lo < t.size()) {
            if(nums[lo] != t[lo]) break;
            lo++;
        }
        if(lo == t.size()) return 0;
        while(hi >= 0) {
            if(nums[hi] != t[hi]) break;
            hi--;
        }
        return hi - lo + 1;
    }
};
