class Solution {
public:
    bool detectCapitalUse(string word) {
        for(int i = 0; i < word.size() - 1; i++) {
            if(i == 0 && isupper(word[i]) && islower(word[i + 1])) continue;
            if(islower(word[i]) && isupper(word[i+1]) || isupper(word[i]) && islower(word[i+1])) 
                return 0;
        }
        return 1;
    }
};
