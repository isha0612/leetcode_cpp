class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> sol;
        vector<int> temp = intervals[0];
        for(auto it : intervals) {
            if(it[0] <= temp[1]) {
                temp[1] = max(it[1], temp[1]);
            } else {
                sol.push_back(temp);
                temp = it;
            }
        }
        sol.push_back(temp);
        return sol;
    }
};
