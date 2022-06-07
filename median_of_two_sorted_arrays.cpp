class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0, n = nums1.size(), m = nums2.size();
        vector<int> sol;
        while(i < n && j < m) {
            if(nums1[i] < nums2[j]) {
                sol.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j]) {
                sol.push_back(nums2[j]);
                j++;
            }
            else {
                sol.push_back(nums2[j]);
                sol.push_back(nums2[j]);
                i++; j++;
            }
        }
        while(i < n) {
            sol.push_back(nums1[i]);
            i++;
        }
        while(j < m) {
            sol.push_back(nums2[j]);
            j++;
        }
        int len = sol.size();
        if(len % 2 != 0)
            return (double)sol[len/2];
        else 
            return (double)(sol[len/2] + sol[len/2-1]) / 2;
    }
};
