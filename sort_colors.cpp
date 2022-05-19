class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zeroes = 0, twos = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) zeroes++;
            else if(nums[i] == 2) twos++;
        }
        int i = 0, j = n - 1;
        for(int c = 0; c < zeroes && i < n; c++) {
            nums[i] = 0;
            i++;
        }
        for(int c = 0; c < twos && j >= 0; c++) {
            nums[j] = 2;
            j--;
        }
        while(i <= j) {
            nums[i] = nums[j] = 1;
            i++; j--;
        }
    }
};

//another solution

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
