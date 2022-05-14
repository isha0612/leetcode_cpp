class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        return pow(3, int(log2(n) / log2(3))) == n;
    }
};

//another solution

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) return false;
        if(n % 3 == 0) return isPowerOfThree(n/3);
        if(n == 1) return true;
        return false;
    }
};
