class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = -1;
        for(int k = 0; k < nums.size(); k++) {
            if(nums[k] % 2 == 0) {
                i++;
                swap(nums[i], nums[k]);
            }
        }
        return nums;
    }
};

//another solution

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int i = 0, j = n - 1;
        for(int k = 0; k < n; k++) {
            if(nums[k] % 2 == 0) {
                res[i] = nums[k];
                i++;
            }
            else {
                res[j] = nums[k];
                j--;
            }
        }
        return res;
    }
};
