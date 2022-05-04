class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while(i < j) {
            if(nums[i] + nums[j] == k) {
                ans++; i++; j--;
            }
            else if(nums[i] + nums[j] > k) {
                j--;
            }
            else i++;
        }
        return ans;
    }
};

//another solution
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int len = nums.size();
        unordered_map<int, int> sum;
        int ans = 0; 
        for(int i = 0; i < len; i++) {
            if(sum[k - nums[i]]) {
                sum[k - nums[i]]--;
                sum[nums[i]]--;
                ans++;
            }
            sum[nums[i]]++;
        }
        return ans;
    }
};
