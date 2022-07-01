class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
        if(a[1] == b[1])
            return a[0] < b[0];
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        int ans = 0;
        for(int i = 0; i < boxTypes.size(); i++) {
            if(truckSize - boxTypes[i][0] < 0) {
                ans += truckSize * boxTypes[i][1];
                break;
            }
            truckSize -= boxTypes[i][0];
            ans += boxTypes[i][0] * boxTypes[i][1];
        }
        return ans;
    }
};
