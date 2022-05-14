class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        int i = 0;
        if(!(n & (n - 1))) {
            while(n) {
                n = n>>1;
                i++;
            }
            if(i % 2 == 1) return true;
            else return false;
        }
        return false;
    }
};

//another solution

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1) return true;
        if(n == 0) return false;
        if(n % 4 == 0) return isPowerOfFour(n/4);
        return false;
    }
};
