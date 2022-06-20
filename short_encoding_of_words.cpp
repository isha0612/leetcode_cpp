class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        int c = 0;
        unordered_map<string, int> m;
        for(int i = 0; i < words.size(); i++) {
            for(int j = 1; j < words[i].size(); j++) {
                string s = words[i].substr(j);
                m[s]++;
            }
        }
        for(int i = 0; i < words.size(); i++) {
            if(m.find(words[i]) != m.end())
                continue;
            else {
                c += words[i].size() + 1;
                m[words[i]];
            }
        }
        return c;
    }
};
