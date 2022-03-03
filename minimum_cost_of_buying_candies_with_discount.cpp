class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        if(n < 3) return accumulate(cost.begin(), cost.end(), 0);
        int sum = 0;
        int c = 0;
        sort(cost.begin(), cost.end());
        for(int i = n - 1; i >= 0; i--) {
            sum += cost[i];
            c++;
            if(c == 2) {
                i--;
                c = 0;
            }
        }
        return sum;
    }
};
