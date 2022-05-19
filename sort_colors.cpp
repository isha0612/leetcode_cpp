class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int i = 0, j = n - 1;
        for(int k = 0; k < n; k++) {
            if(nums[k] == 0) 
                ans[i++] = 0;
            else if(nums[k] == 2)
                ans[j--] = 2;
        }
        while(i <= j) {
            ans[i] = ans[j] = 1;
            i++; j--;
        }
        nums = ans;
    }
};
