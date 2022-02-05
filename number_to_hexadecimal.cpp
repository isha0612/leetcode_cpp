class Solution {
public:
    string toHex(int num) {
        string s = "";
        unsigned int n = (unsigned int) num;
            while(n > 0) {
            int r = n % 16;
            if(r < 10) {
                char c = r + 48;
                s.push_back(c);
            }
            else {
                char c = r - 10 + 'a';
                s.push_back(c);
            }
            n /= 16;
            }
        reverse(s.begin(), s.end());
        return s.size() ? s : "0";
    }
};
