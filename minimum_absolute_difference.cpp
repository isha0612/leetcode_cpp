class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> sol;
        int n = arr.size();
        int minDiff = INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n - 1; i++) {
            if(arr[i+1] - arr[i] < minDiff) 
                minDiff = arr[i+1] - arr[i];
        }
        for(int i = 0; i < n - 1; i++) {
            if(arr[i+1] - arr[i] == minDiff) {
                vector <int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                sol.push_back(temp);
            }
        }
        return sol;
    }
};
