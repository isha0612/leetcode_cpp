class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        priority_queue<pair<int, int>> q;
        for(auto it : m) 
            q.push({-1 * it.second, it.first});
        vector<int> ans;
        while(!q.empty()) {
            int freq = -1 * q.top().first;
            while(freq--)
                ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
