class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        vector<int> ans;
        for(int i = 0; i < s.size(); i++)
            if(s[i] == c)
                v.push_back(i);
        int i = 0, j = 1, k = 0;
        while(i == 0) {
            if(v[i] == k) {
                ans.push_back(0);
                k++;
                break;
            }
            ans.push_back(v[i] - k);
            k++;
        }
        while(k < s.size() && j < v.size()) {
            if(v[j] == k || v[i] == k) {
                ans.push_back(0);
                i++;
                j++;
            }
            else {
                ans.push_back(min(abs(v[i] - k), abs(v[j] - k)));
            }
            k++;
        }
        j--;
        while(k < s.size()) {
            if(v[j] == k) {
                ans.push_back(0);
                break;
            }
            ans.push_back(abs(v[j] - k));
            k++;
        }
        return ans;
    }
};
