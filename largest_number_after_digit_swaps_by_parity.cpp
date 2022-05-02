class Solution {
public:
    int largestInteger(int num) {
        int res = 0;
        vector<bool> p;
        priority_queue<int> evenP;
        priority_queue<int> oddP;
        while(num) {
            int rem = num % 10;
            if(rem % 2 == 0) {
                evenP.push(rem);
                p.push_back(0);
            }
            else {
                oddP.push(rem);
                p.push_back(1);
            }
            num /= 10;
        }
        for(int i = p.size() - 1; i >= 0; i--) {
            if(p[i] == 0) {
                res = res * 10 + evenP.top();
                evenP.pop();
            }
            else {
                res = res * 10 + oddP.top();
                oddP.pop();
            }
        }
        return res;
    }
};
