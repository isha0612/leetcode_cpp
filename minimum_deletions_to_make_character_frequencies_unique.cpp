class Solution {
public:
    int minDeletions(string s) {
        priority_queue<int> pq;
        unordered_map<char, int> mp;
        for(auto i : s) {
            mp[i]++;
        }
        for(auto i : mp) {
            pq.push(i.second);
        }
        int ans = 0;
        while(!pq.empty()) {
            int top = pq.top();
            pq.pop();
            if(!pq.empty()) {
                if(top == pq.top()) {
                    top--;
                    if(top > 0)
                        pq.push(top);
                    ans++;
                }
            }
        }
        return ans;
    }
};
