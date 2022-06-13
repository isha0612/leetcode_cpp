class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> oddSort, evenSort;
        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0)
                evenSort.push_back(nums[i]);
            else
                oddSort.push_back(nums[i]);
        }
        sort(evenSort.begin(), evenSort.end());
        sort(oddSort.begin(), oddSort.end(), greater<int>());
        int j = 0, k = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0)
                nums[i] = evenSort[j++];
            else
                nums[i] = oddSort[k++];
        }
        return nums;
    }
};
