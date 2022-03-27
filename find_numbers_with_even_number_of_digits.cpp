class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(isEven(nums[i])) c++;
        }
        return c;
    }
    bool isEven(int n) {
        int c = 0;
        while(n > 0) {
            c++;
            n /= 10;
        }
        return c % 2 == 0;
    }
};
