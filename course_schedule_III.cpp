class Solution {
public:
    bool static cmp(vector<int> &a, vector<int> &b) {
        if(a[1] == b[1])
            return a[0] < b[0];
        return a[1] < b[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        priority_queue<int> pq;
        int ans = 0;
        sort(courses.begin(), courses.end(), cmp);
        int curr = 0;
        for(int i = 0; i < courses.size(); i++) {
            if(curr + courses[i][0] <= courses[i][1]) {
                curr += courses[i][0];
                pq.push(courses[i][0]);
            }
            else if(!pq.empty() && pq.top() > courses[i][0]) {
                curr -= pq.top();
                pq.pop();
                pq.push(courses[i][0]);
                curr += courses[i][0];
            }
        }
        return pq.size();
    }
};
