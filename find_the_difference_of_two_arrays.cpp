class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> v(2);
        unordered_set s1(nums1.begin(), nums1.end());
        unordered_set s2(nums2.begin(), nums2.end());
        for(auto it : s1) {
            if(s2.count(it) == 0) {
                v[0].push_back(it);
            }
        }
        for(auto it : s2) {
            if(s1.count(it) == 0) {
                v[1].push_back(it);
            }
        }
        return v;
    }
};
