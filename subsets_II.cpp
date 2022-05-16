class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(), nums.end());
        backtrack(nums, 0, temp);
        return ans;
    }
    
    void backtrack(vector<int>& nums, int idx, vector<int>& temp) {
        ans.push_back(temp);
        for(int i = idx; i < nums.size(); i++) {
            if(i > idx && nums[i] == nums[i-1]) continue;
            temp.push_back(nums[i]);
            backtrack(nums, i + 1, temp);
            temp.pop_back();
        }
    }
};
