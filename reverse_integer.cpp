class Solution {
public:
    int reverse(int x) {
        long int sum = 0;
        if(x >= 2147483647 || x <= -2147483648) return 0;
        if(x < 0) {
            x = -x;
            while(x > 0) {
                sum = sum * 10;
                if(sum >= 2147483647 || sum <= -2147483648) return 0;
                sum += x % 10;
                x /= 10;
            }
            sum = -sum;
        }
        else {
            while(x > 0) {
                sum = sum * 10;
                if(sum >= 2147483647 || sum <= -2147483648) return 0;
                sum += x % 10;
                x /= 10;
            }
        }
        return sum;
    }
};
