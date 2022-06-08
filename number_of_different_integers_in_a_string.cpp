class Solution {
public:
    int numDifferentIntegers(string word) {
        int i = 0;
        set<string> s;
        while(i < word.size()) {
            if(word[i] >= '0' && word[i] <= '9') {
                string a = "";
                while(word[i] == '0' && i < word.size()) 
                    i++;
                while(word[i] >= '0' && word[i] <= '9') {
                    a += word[i];
                    i++;
                }
                s.insert(a);
            }
            else
                i++;
        }
        return s.size();
    }
};
