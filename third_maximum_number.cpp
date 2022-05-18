class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        if(s.size() < 3) return *--s.end();
        auto it = s.end();
        int i = 0;
        while(i != 3) {
            it--; i++;
        }
        return *it;
    }
};
