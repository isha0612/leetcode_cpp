class Solution {
public:
    string addStrings(string a, string b) {
        int i = a.length() - 1, j = b.length() - 1;
        string s = "";
        int carry = 0, x;
        long long res = 0;
        while(i >= 0 && j >= 0) {
            if(carry) res = carry + (a[i] - '0') + (b[j] - '0');
            else res = (a[i] - '0') + (b[j] - '0');
            carry = res / 10;
            x = res % 10;
            s += to_string(x);
            i--;
            j--;
        }
        while(i >= 0) {
            if(carry) res = carry + (a[i] - '0');
            else res = (a[i] - '0');
            carry = res / 10;
            x = res % 10;
            s += to_string(x);
            i--;
        }
        while(j >= 0) {
            if(carry) res = carry + (b[j] - '0');
            else res = (b[j] - '0');
            carry = res / 10;
            x = res % 10;
            s += to_string(x);
            j--;
        }
        if(carry) {
            s += to_string(carry);
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
