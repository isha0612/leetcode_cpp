class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < nums.size(); i++)
            pq.push(nums[i]);
        for(int i = 0; i < k; i++) {
            int n = pq.top();
            pq.pop();
            pq.push(n * -1);
        }
        int sum = 0;
        while(!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        cout<<endl;
        return sum;
    }
};
