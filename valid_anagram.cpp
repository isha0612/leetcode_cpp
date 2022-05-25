class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return 0;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(s[i] != t[i]) return 0;
        }
        return 1;
    }
};

//another solution

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return 0;
        unordered_map<char, int> m;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            m[s[i]]++;
            m[t[i]]--;
        }
        for(auto it : m) {
            if(it.second != 0)
                return 0;
        }
        return 1;
    }
};
