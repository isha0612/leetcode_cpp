class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) return nums.size();
        vector<int> ans;
        int i = 0;
        while(i < nums.size() - 1) {
            if(nums[i] == nums[i + 1]) {
                ans.push_back(nums[i]);
                ans.push_back(nums[i]);
                while(i < nums.size() - 1 && nums[i] == nums[i + 1])
                    i++;
            }
            else {
                ans.push_back(nums[i]);
            }
            i++;
        }
        if(i < nums.size() && nums[i] != nums[i - 1])
            ans.push_back(nums[i]);
        nums.resize(ans.size());
        for(int i = 0; i < ans.size(); i++)
            nums[i] = ans[i];
        return nums.size();
    }
};

//another solution

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return nums.size();
        int l = 0, r = 2;
        while(r < n) {
            if(nums[l] != nums[r]) {
                nums[l+2] = nums[r];
                l++;
            }
            r++;
        }
        return l + 2;
    }
};
