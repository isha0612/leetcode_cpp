class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector <pair <int, int> > v;
        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] == nums[j]) v.push_back({i, j});
            }
        }
        return v.size();
    }
};
