class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> sol(nums.size());
        int e = 0, o = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0) {
                sol[e] = nums[i];
                e += 2;
            }
            else {
                sol[o] = nums[i];
                o -= 2;
            }
        }
        return sol;
    }
};
