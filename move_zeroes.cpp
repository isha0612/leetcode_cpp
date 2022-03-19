class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0;
        for(auto it : nums) {
            if(it == 0) c++;
        }
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
        for(int i = 0; i < c; i++) nums.push_back(0);
    }
};
