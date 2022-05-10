class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map <char, int> m;
        vector <string> v;
        string a = "qwertyuiop";
        string b = "asdfghjkl";
        string c = "zxcvbnm";
        for(auto i : a) {
            m[i] = 1;
            m[toupper(i)] = 1;
        }
        for(auto i : b) {
            m[i] = 2;
            m[toupper(i)] = 2;
        }
        for(auto i : c) {
            m[i] = 3;
            m[toupper(i)] = 3;
        }
        
        for(int i = 0; i < words.size(); i++) {
            string s = "";
            int j = 0;
            for(j = 0; j < words[i].size() - 1; j++) {
                if(m[words[i][j]] != m[words[i][j+1]]) break;
                s.push_back(words[i][j]);
            }
            if(j == words[i].size() - 1) {
                s.push_back(words[i][j]);
                v.push_back(s);
            }
        }
        return v;
    }
};
