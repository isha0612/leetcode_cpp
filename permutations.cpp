class Solution {
public:
    vector<vector<int>> sol;
    vector<vector<int>> permute(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        find(nums, l, r);
        return sol;
    }
    void find(vector<int>& nums, int l, int r) {
        if(l == r) {
            sol.push_back(nums);
            return;
        }
        for(int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            find(nums, l + 1, r);
            swap(nums[i], nums[l]);
        }
    }
};
