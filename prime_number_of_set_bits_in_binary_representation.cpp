class Solution {
public:
    bool isPrime(int n) {
        if(n == 1) return false;
        for(int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0)
                return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i = left; i <= right; i++) {
            if(isPrime(__builtin_popcount(i)))
                ans++;
        }
        return ans;
    }
};
