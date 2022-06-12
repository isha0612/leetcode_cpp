class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++) {
            auto it = find(arr.begin(), arr.end(), 2 * arr[i]);
            if(it != arr.end() && it - arr.begin() != i)
                return true;
        }
        return false;
    }
};
