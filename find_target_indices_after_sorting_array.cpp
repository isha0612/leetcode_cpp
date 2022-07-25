class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int i = 0, j = nums.size() - 1, mid;
        while(i <= j) {
            mid = i + (j - i) / 2;
            if(nums[mid] == target) break;
            else if(nums[mid] > target) j = mid - 1;
            else i = mid + 1;
        }
        i = j = mid;
        while(i >= 0 && nums[i] == target) i--;
        while(j < nums.size() && nums[j] == target) j++;
        i++, j--;
        while(i <= j) {
            ans.push_back(i);
            i++;
        }
        return ans;
    }
};

//another solution

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int beforeTarget = 0, totalTargets = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < target) beforeTarget++;
            else if(nums[i] == target) totalTargets++;
        }
        for(int i = beforeTarget; i < beforeTarget + totalTargets; i++) {
            ans.push_back(i);
        }
        return ans;
    }
};
