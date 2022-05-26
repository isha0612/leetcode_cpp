class Solution {
public:
    bool hasAlternatingBits(int n) {
        int lastBit = n % 2, currBit = 0;
        n = n >> 1;
        while(n) {
            currBit = n % 2;
            if(lastBit == currBit) 
                return false;
            lastBit = currBit;
            n = n >> 1;
        }
        return true;
    }
};
