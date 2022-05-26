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

//another solution

class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> sol;
        while(n) {
            sol.push_back(n % 2);
            n = n >> 1;
        }
        for(int i = 0; i < sol.size() - 1; i++) {
            if(sol[i] == sol[i + 1])
                return false;
        }
        return true;
    }
};
