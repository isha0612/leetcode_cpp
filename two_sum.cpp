class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        map<int, int> sum;
        vector <int> result;
        for(int i = 0; i < len; i++) {
            sum[nums[i]] = i;
        }
        for(int i = 0; i < len; i++) {
            int s = target - nums[i];
            auto it = sum.find(s);
            if(it != sum.end() && (it->second) != i) {
                result.push_back(i);
                result.push_back(it->second);
                return result;
            }
        }
        return {};
    }
};
