class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, n = s.size(), ans = 0;
        unordered_set<char> set;
        while(i < n && j < n) {
            if(set.find(s[j]) == set.end()) {
                set.insert(s[j++]);
                ans = max(ans, j - i);
            }
            else {
                set.erase(s[i++]);
            }
        }
        return ans;
    }
};
