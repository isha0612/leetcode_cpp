class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> sol = {-1, -1};
        int start = search(nums, target, true);
        int end = search(nums, target, false);
        sol[0] = start;
        sol[1] = end;
        return sol;
    }
    int search(vector<int> nums, int target, bool isStart) {
        int i = 0, j = nums.size() - 1;
        int ans = -1;
        while(i <= j) {
            int mid = (i + j) / 2;
            if(nums[mid] > target) j = mid - 1;
            else if(nums[mid] < target) i = mid + 1;
            else {
                ans = mid;
                if(isStart) j = mid - 1;
                else i = mid + 1;
            }
        }
        return ans;
    }
};
