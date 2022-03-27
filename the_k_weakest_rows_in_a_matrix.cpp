class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();
        multiset<pair<int, int>> mp;
        vector<int> v;
        int sum;
        for(int i = 0; i < n; i++) {
            sum = 0;
            for(int j = 0; j < m; j++) {
                sum += mat[i][j];
            }
            mp.insert({sum, i});
        }
        int i = 0;
        auto it = mp.begin();
        while(i < k) {
            v.push_back(it->second);
            it++;
            i++;
        }
        return v;
    }
};
