/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i = 1, j = n;
        while(i <= j) {
            int mid = i + (j - i) / 2;
            int ans = guess(mid);
            if(ans == 0)
                return mid;
            else if(ans == -1)
                j = mid - 1;
            else
                i = mid + 1;
        }
        return i;
    }
};
