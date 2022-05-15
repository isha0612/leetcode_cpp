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

//another solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = -1, j = 0;
        while(j < nums.size()) {
            if(nums[j] != 0) {
                i++;
                swap(nums[i], nums[j]);
            }
            j++;
        }
    }
};
