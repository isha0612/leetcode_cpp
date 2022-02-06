class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        sort(strs.begin(), strs.end());
        string f = strs[0], l = strs[strs.size() - 1];
        for(int i = 0; i < f.size(); i++) {
            if(f[i] == l[i]) s += f[i];
            else break;
        }
        return s;
    }
    
};
