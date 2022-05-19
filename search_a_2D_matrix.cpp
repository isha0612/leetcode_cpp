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

//another solution

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int i = 0;
        while(i + 1 < n) {
            if(matrix[i][0] < target && matrix[i + 1][0] > target) break;
            i++;
        }
        while(i >= 0) {
            bool ans = searchBinary(matrix[i], target);
            if(ans) return true;
            i--;
        }
        return false;
    }
    
    bool searchBinary(vector<int> &arr, int target) {
        int i = 0, j = arr.size() - 1;
        while(i <= j) {
            int mid = i + (j - i) / 2;
            if(arr[mid] == target)
                return true;
            else if(arr[mid] < target)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return false;
    }
};
