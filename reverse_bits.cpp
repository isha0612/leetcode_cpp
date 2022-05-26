class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int i = 0;
        uint32_t t = 0;
        while(i < 32) {
            t = (t << 1) + (n % 2);
            n = n >> 1;
            i++;
        }
        return t;
    }
};
