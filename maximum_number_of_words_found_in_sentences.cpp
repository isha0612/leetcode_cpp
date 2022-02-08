class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = INT_MIN, sum = 0;
        for(int i = 0; i < sentences.size(); i++) {
            sum = 0;
            for(int j = 0; j < sentences[i].size(); j++) {
                if(sentences[i][j] == ' ') {
                    sum++;
                }
            }
            sum++;
            ans = max(ans, sum);
        }
        return ans;
    }
};
