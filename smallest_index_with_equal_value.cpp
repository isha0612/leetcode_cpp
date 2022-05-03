class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        vector<int> ans(101);
        for(int i = 0; i <= 100; i++) {
            ans[i] = i % 10;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(ans[i] == nums[i]) return i;
        }
        return -1;
    }
};
