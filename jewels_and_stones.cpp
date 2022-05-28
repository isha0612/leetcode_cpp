class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        sort(stones.begin(), stones.end());
        sort(jewels.begin(), jewels.end());
        int i = 0, j = 0, ans = 0;
        while(i < jewels.size() && j < stones.size()) {
            if(jewels[i] == stones[j]) {
                char c = jewels[i];
                while(j < stones.size() && c == stones[j]) {
                    ans++;
                    j++;
                }
                i++;
            }
            else if(jewels[i] > stones[j]) {
                j++;
            }
            else {
                i++;
            }
        }
        return ans;
    }
};
