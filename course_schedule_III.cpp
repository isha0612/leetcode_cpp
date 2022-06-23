class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        vector<pair<int, int>> vp;
        priority_queue<int> pq;
        int ans = 0;
        for(int i = 0; i < courses.size(); i++) {
            vp.push_back({courses[i][1], courses[i][0]});
        }
        sort(vp.begin(), vp.end());
        int curr = 0;
        for(int i = 0; i < vp.size(); i++) {
            if(curr + vp[i].second <= vp[i].first) {
                curr += vp[i].second;
                pq.push(vp[i].second);
            }
            else if(!pq.empty() && pq.top() > vp[i].second) {
                curr -= pq.top();
                pq.pop();
                pq.push(vp[i].second);
                curr += vp[i].second;
            }
        }
        return pq.size();
    }
};
