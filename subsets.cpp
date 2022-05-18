class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        backtrack(nums, 0, temp);
        return ans;
    }
    
    void backtrack(vector<int>& nums, int idx, vector<int>& temp) {
        if(idx == nums.size()) {
            ans.push_back(temp);
            return;
        }
        // the element has two choices
        
        //to be
        backtrack(nums, idx + 1, temp);
        
        //not to be
        temp.push_back(nums[idx]);
        backtrack(nums, idx + 1, temp);
        temp.pop_back();
    }
};

//another solution
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sol;
        int size = nums.size();
        int n = (1 << size);
        for(int i = 0; i < n; i++) {
            vector<int> temp;
            for(int j = 0; j < size; j++) {
                if(i & (1 << j)) {
                    temp.push_back(nums[j]);
                }
            }
            sol.push_back(temp);
        }
        return sol;
    }
};
