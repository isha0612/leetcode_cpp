class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1, 0);
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0 && nums[i] <= n)
                freq[nums[i]]++;
        }
        for(int i = 1; i <= n; i++) {
            if(freq[i] == 0) 
                return i;
        }
        return n + 1;
    }
};
