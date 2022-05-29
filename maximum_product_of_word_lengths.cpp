class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        int mx = 0;
        for(int i = 0; i < n; i++) 
            sort(words[i].begin(), words[i].end());
        for(int i = 0; i < n - 1; i++) {
            for(int l = i + 1; l < n; l++) {
                int j = 0, k = 0;
                bool flag = 1;
                while(j < words[i].size() && k < words[l].size()) {
                    if(words[i][j] == words[l][k]) {
                       flag = 0;
                       break;
                    }
                    else if(words[i][j] < words[l][k]) j++;
                    else k++;
                }
                if(flag) {
                    int ans = words[i].size() * words[l].size();
                    mx = mx > ans ? mx : ans; 
                }
            }
        }
        return mx;
    }
};
