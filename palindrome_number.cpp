class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long n = x;
        long long sum = 0;
        while(x > 0) {
            sum = (sum * 10) + (x % 10);
            x /= 10;
        }
        return n == sum;
    }
};
