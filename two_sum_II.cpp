class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sol;
        int i = 0, j = numbers.size() - 1;
        while(i < j) {
            if(numbers[i] + numbers[j] == target) {
                sol.push_back(i+1);
                sol.push_back(j+1);
                break;
            }
            else if(numbers[i] + numbers[j] > target)
                j--;
            else
                i++;
        }
        return sol;
    }
};
