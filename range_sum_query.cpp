class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        v.resize(n + 1);
        for(int i = 1; i <= n; i++) {
            v[i] = nums[i-1] + v[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        left++; right++;
        return v[right] - v[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
