class Solution {
public:
    int numberOfSteps(int num) {
        int c = 0;
        while(num) {
            if(num % 2 == 0) num /= 2;
            else num -= 1;
            c++;
        }
        return c;
    }
};

//another solution

class Solution {
public:
    int numberOfSteps(int num) {
        int c = 0;
        while(num) {
            if(num & 1) num--;
            else num = num / 2;
            c++;
        }
        return c;
    }
};
