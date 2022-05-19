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
        for(int i = 0; i < matrix.size(); i++) {
            if(binarySearch(matrix[i], target))
                return true;
        }
        return false;
    }
    bool binarySearch(vector<int> &arr, int target) {
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
