/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak = findPeak(mountainArr);
        int index = search(mountainArr, target, 0, peak);
        if(index != -1) return index;
        index = search(mountainArr, target, peak + 1, mountainArr.length() - 1);
        return index;
    }
    int findPeak(MountainArray &mountainArr) {
        int i = 0, j = mountainArr.length() - 1;
        while(i < j) {
            int mid = (i + j) / 2;
            if(mountainArr.get(mid) > mountainArr.get(mid + 1)) j = mid;
            else if(mountainArr.get(mid) < mountainArr.get(mid + 1)) i = mid + 1;
        }
        return i;
    }
    int search(MountainArray &mountainArr, int target, int i, int j) {
        bool asc = mountainArr.get(i) < mountainArr.get(j);
        while(i <= j) {
            int mid = (i + j) / 2;
            if(mountainArr.get(mid) == target) 
                return mid;
            else if(mountainArr.get(mid) > target) 
                if(asc)
                    j = mid - 1;
                else
                    i = mid + 1;
            else 
                if(asc)
                    i = mid + 1;
                else
                    j = mid - 1;
        }
        return -1;
    }
};
