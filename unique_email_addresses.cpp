class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        for(int i = 0; i < emails.size(); i++) {
            bool flag = 0;
            string a = "";;
            for(int j = 0; j < emails[i].size(); j++) {
                if(!flag && emails[i][j] == '.')
                    continue;
                else if(!flag && emails[i][j] == '+') {
                    while(j < emails[i].size() && emails[i][j] != '@')
                        j++;
                    a += '@';
                    flag = 1;
                }
                else if(emails[i][j] == '@') {
                    a += '@';
                    flag = 1;
                }
                else {
                    a += emails[i][j];
                }
            }
            s.insert(a);
        }
        return s.size();
    }
};
