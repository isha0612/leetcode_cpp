class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> sol(n);
        int i = 0, j = n - 1, k = n - 1;
        while(i <= j) {
            if(nums[i] * nums[i] > nums[j] * nums[j]) {
                sol[k--] = nums[i] * nums[i];
                i++;
            }
            else {
                sol[k--] = nums[j] * nums[j];
                j--;
            }
        }
        return sol;
    }
};
