class Solution {
public:
    set<vector<int>> s;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        find(nums, l, r);
        vector<vector<int>> sol(s.begin(), s.end());
        return sol;
    }
    void find(vector<int>& nums, int l, int r) {
        if(l == r) {
            s.insert(nums);
            return;
        }
        for(int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            find(nums, l + 1, r);
            swap(nums[i], nums[l]);
        }
    }
};

