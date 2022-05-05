class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int max = *max_element(arr1.begin(), arr1.end());
        vector<int> count(max+1, 0);
        for(int i = 0; i < arr1.size(); i++) {
            count[arr1[i]]++;
        }
        int k = 0;
        for(int i = 0; i < arr2.size(); i++) {
            while(count[arr2[i]] > 0) {
                arr1[k] = arr2[i];
                k++;
                count[arr2[i]]--;
            }
        }
        for(int i = 0; i <= max; i++) {
            while(count[i] > 0) {
                arr1[k] = i;
                k++;
                count[i]--;
            }
        }
        return arr1;
    }
};
