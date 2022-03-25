class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int r = 0, c = m - 1;
        bool f = 0;
        while(r < n && c >= 0) {
            if(matrix[r][c] == target) {
                f = 1;
                break;
            }
            else if(matrix[r][c] > target) {
                c--;
            }
            else r++;
        }
        return f;
    }
};
