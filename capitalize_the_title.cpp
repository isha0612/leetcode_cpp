class Solution {
public:
    string capitalizeTitle(string title) {
        string s = "", t = "";
        for(int i = 0; i < title.size(); i++) {
            if(title[i] == ' ' && title[i - 1] != ' ') {
                if(s.size() > 2) s[0] = toupper(s[0]);
                t += s;
                t += " ";
                s = "";
            }
            else if(title[i] != ' ') {
                s += tolower(title[i]);
            }
        }
        if(s.size() > 2) {
            s[0] = toupper(s[0]);
        } 
        t += s;
        return t;
    }
};
