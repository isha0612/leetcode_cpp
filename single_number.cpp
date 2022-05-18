class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = 0;
        for(int i = 0; i < nums.size(); i++) {
            n = n ^ nums[i];
        }
        return n;
    }
};

//another solution

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] != nums[i + 1]) return nums[i];
            i++;
        }
        return nums[nums.size() - 1];
    }
};
