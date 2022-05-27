class Solution {
public:
    static bool cmp(string &a, string &b) {
        if(a.size() == b.size()) {
            int n = a.size();
            for(int i = 0; i < n; i++) {
                if(a[i] > b[i])
                    return true;
                else if(b[i] > a[i])
                    return false;
            }
        }
        return a.size() > b.size();
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), cmp);
        return nums[k - 1];
    }
};
