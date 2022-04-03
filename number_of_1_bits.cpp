class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t mask = (uint32_t)1;
        int c = 0;
        while(mask) {
            if(mask & n) c++;
            mask = mask << 1;
        }
        return c;
    }
};
