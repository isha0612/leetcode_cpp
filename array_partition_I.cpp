class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int i = 0, j = 1;
        int sum = 0;
        sort(nums.begin(), nums.end());
        while(i < nums.size() - 1 && j < nums.size()) {
            sum += min(nums[i], nums[j]);
            i = j + 1;
            j += 2;
        }
        return sum;
    }
};
