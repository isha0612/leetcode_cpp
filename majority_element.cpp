class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0, c = 0, i, mx = nums[0];
        for(i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i - 1]) ans++;
            else {
                if(ans > c) {
                    c = ans;
                    mx = nums[i - 1];
                } 
                ans = 0;
            }
        }
        mx = ans > c ? nums[i - 1] : mx;
        return mx;
    }
};
