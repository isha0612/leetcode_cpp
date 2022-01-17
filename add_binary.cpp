class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1, j = b.length() - 1;
        string s = "";
        int carry = 0;
        while(i >= 0 && j >= 0) {
            if(a[i] == '0' && b[j] == '0') {
                if(carry) {
                    s.push_back('1');
                }
                else {
                    s.push_back('0');
                }
                carry = 0;
            } 
            else if((a[i] == '0' && b[j] == '1') || (a[i] == '1' && b[j] == '0')) {
                if(carry) {
                    s.push_back('0');
                    carry = 1;
                }
                else {
                    s.push_back('1');
                    carry = 0;
                }
            }
            else if(a[i] == '1' && b[j] == '1') {
                if(carry) {
                    s.push_back('1');
                }
                else {
                    s.push_back('0');
                }
                carry = 1;
            }
            i--;
            j--;
        }
        while(i >= 0) {
            if(carry) {
                if(a[i] == '0') {
                    s.push_back('1');
                    carry = 0;
                }
                else {
                    s.push_back('0');
                    carry = 1;
                }
            }
            else {
                if(a[i] == '0') {
                    s.push_back('0');
                }
                else {
                    s.push_back('1');
                }
                carry = 0;
            }
            i--;
        }
        while(j >= 0) {
            if(carry) {
                if(b[j] == '0') {
                    s.push_back('1'); 
                    carry = 0;
                }
                else {
                    s.push_back('0');
                    carry = 1;
                }
            }
            else {
                if(b[j] == '0') {
                    s.push_back('0'); 
                }
                else {
                    s.push_back('1');
                }
                carry = 0;
            }
            j--;
        }
        if(carry) s.push_back('1');
        reverse(s.begin(), s.end());
        return s;
    }
};
