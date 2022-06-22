class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> ans(k);
        priority_queue<pair<int, int>> pq;
        for(int i = 0; i < nums.size(); i++)
            pq.push({nums[i], i});
        for(int i = 0; i < k; i++) {
            ans[i] = pq.top().second;
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        for(int i = 0; i < k; i++) {
            ans[i] = nums[ans[i]];
        }
        return ans;
    }
};
