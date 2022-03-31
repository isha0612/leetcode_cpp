class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sol;
        if(nums.size() < 3) return sol;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 2; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1, k = n - 1;
            while(j < k) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    sol.push_back({nums[i], nums[j], nums[k]});
                    int l = nums[j], h = nums[k];
                    while(j < k && nums[j] == l) j++;
                    while(k > j && nums[k] == h) k--;
                }
                else if(nums[i] + nums[j] + nums[k] > 0) {
                    k--;
                }
                else {
                    j++;
                }
            }
        }
        return sol;
    }
};
