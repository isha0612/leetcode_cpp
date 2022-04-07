class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int val = 0;
        while(stones.size() != 1) {
            sort(stones.begin(), stones.end());
            int n = stones.size();
            int val = stones[n - 1] - stones[n - 2];
            stones.erase(stones.end() - 2, stones.end());
            stones.push_back(val);
        }
        return stones[0];
    }
};
