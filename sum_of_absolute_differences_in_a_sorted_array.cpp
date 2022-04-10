class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        int tot = accumulate(nums.begin(), nums.end(), 0);
        vector<int> prefix(n, 0), res(n, 0);
        prefix[0] = nums[0];
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        for(int i = 0; i < n; i++) {
            res[i] = (i + 1) * nums[i] - prefix[i];
            res[i] += tot - prefix[i] - (n - i - 1) * nums[i];
        }
        return res;
    }
};
