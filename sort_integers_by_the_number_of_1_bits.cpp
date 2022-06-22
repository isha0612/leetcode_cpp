class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int, vector<int>> mp;
        vector<int> ans;
        for(int i = 0; i < arr.size(); i++) {
            int n = __builtin_popcount(arr[i]);
            mp[n].push_back(arr[i]);
        }
        for(auto i : mp) {
            sort(i.second.begin(), i.second.end());
            for(auto v : i.second) 
                ans.push_back(v);
        }
        return ans;
    }
};
