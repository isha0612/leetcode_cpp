class Solution {
public:
    int maximum69Number (int num) {
        int x = num;
        int n = -1, i = 0;
        while(x) {
            if(x % 10 == 6) n = i;
            x /= 10;
            i++;
        }
        return num + 3 * pow(10, n);
    }
};
