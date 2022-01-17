class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> sum;
        int i = digits.size() - 1, carry = 0;
        digits[i] += 1;
        while(i >= 0) {
            int n = digits[i] + carry;
            if(n > 9) {
                sum.push_back(n % 10);
                carry = n / 10;
            } else {
                sum.push_back(n);
                carry = 0;
            }
            i--;
        }
        if(carry) sum.push_back(carry);
        reverse(sum.begin(), sum.end());
        return sum;
    }
};
