class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int n = matrix.size(), m = matrix[0].size();
        int t = 0, b = n - 1, l = 0, r = m -1;
        while(l <= r && t <= b) {
            for(int i = l; i <= r; i++) v.push_back(matrix[t][i]);
            t++;
            if(t > b) break;
            for(int i = t; i <= b; i++) v.push_back(matrix[i][r]);
            r--;
            if(l > r) break;
            for(int i = r; i >= l; i--) v.push_back(matrix[b][i]);
            b--;
            if(t > b) break;
            for(int i = b; i >= t; i--) v.push_back(matrix[i][l]);
            l++;
        }
        return v;
    }
};
