class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum = 0;
        int i = 0;
        int len = s.size();
        while(i < len) {
            if(m[s[i]] < m[s[i+1]] && i+1 != len) {
                sum += (m[s[i+1]] - m[s[i]]);
                i++;
            }
            else {
                sum += m[s[i]];
            }
            i++;
        }
        return sum;
    }
};
