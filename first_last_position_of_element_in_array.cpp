class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> v, s;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target) s.push_back(i);
        }
        if(s.size() == 0) {
            v = {-1, -1};
        }
        else if(s.size() == 1) {
            s.push_back(s[0]);
            v = s;
        }
        else {
            v.push_back(s[0]);
            v.push_back(s[s.size() - 1]);
        }
        return v;
    }
};
