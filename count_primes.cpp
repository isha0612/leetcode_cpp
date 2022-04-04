class Solution {
public:
    int countPrimes(int n) {
        if(n == 0 || n == 1) return 0;
        bool arr[n];
        int c = 0;
        for(int i = 0; i < n; i++) arr[i] = true;
        for(int i = 2; i <= sqrt(n); i++) {
            if(arr[i] == true) {
                for(int j = i * i; j < n; j += i)
                    arr[j] = false;
            }
        }
        for(int i = 2; i < n; i++) {
            if(arr[i] == true) c++;
        }
        return c;
    }
};
