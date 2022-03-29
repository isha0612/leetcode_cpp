class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0;
        while(i < nums.size()) {
            int index = nums[i] - 1;
            if(nums[i] != nums[index]) {
                swap(nums[i], nums[index]);
            }
            else i++;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != i + 1) return nums[i];
        }
        return -1;
    }
};

//Another solution

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int val = abs(nums[i]) - 1;
            if(nums[val] < 0) return abs(nums[i]);
            nums[val] = -nums[val];
        }
        return -1;
    }
};
