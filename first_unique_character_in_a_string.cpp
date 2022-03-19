class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26];
        for(int i = 0; i < 26; i++) {
            arr[i] = -1;
        }
        for(int i = 0; i < s.size(); i++) {
            arr[s[i] - 'a']++;
        }
        for(int i = 0; i < s.size(); i++) {
            if(arr[s[i] - 'a'] == 0) return i;
        }
        return -1;
    }
};
