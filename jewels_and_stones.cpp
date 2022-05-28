class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> m;
        for(int i = 0; i < stones.size(); i++)
            m[stones[i]]++;
        int ans = 0;
        for(int i = 0; i < jewels.size(); i++) {
            if(m.find(jewels[i]) != m.end())
                ans += m[jewels[i]];
        }
        return ans;
    }
};

//another solution

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
