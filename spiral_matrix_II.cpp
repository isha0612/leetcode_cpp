class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int> (n, 0));
        int r = n - 1, l = 0, b = n - 1, t = 0;
        int c = 1;
        while(t <= b && l <= r) {
            for(int i = l; i <= r; i++) {
                v[t][i] = c;
                c++;
            }
            t++;
            for(int i = t; i <= b; i++) {
                v[i][r] = c;
                c++;
            }
            r--;
            for(int i = r; i >= l; i--) {
                v[b][i] = c;
                c++;
            }
            b--;
            for(int i = b; i >= t; i--) {
                v[i][l] = c;
                c++;
            }
            l++;
        }
        return v;
    }
};
