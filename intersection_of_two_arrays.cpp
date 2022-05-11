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

//another solution
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sol;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j]) {
                sol.push_back(nums1[i]);
                while(i < nums1.size() - 1 && nums1[i] == nums1[i+1]) {
                    i++;
                }
                i++;
                while(j < nums2.size() - 1 && nums2[j] == nums2[j+1]) {
                    j++;
                }
                j++;
            }
            else if(nums1[i] < nums2[j]) i++;
            else j++;
        }
        return sol;
    }
};
