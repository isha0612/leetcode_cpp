class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sol;
        unordered_map<string, vector<string>> m;
        for(auto s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            m[t].push_back(s);
        }
        for(auto s : m)
            sol.push_back(s.second);
        return sol;
    }
};
