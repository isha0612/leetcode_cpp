class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sol;
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    sol.push_back(nums1[i]);
                    break;
                }
            }
        }
        sort(sol.begin(), sol.end());
        sol.erase(unique(sol.begin(), sol.end()), sol.end());
        return sol;
    }
};
