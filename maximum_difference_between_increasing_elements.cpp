class Solution { 
  public: 
  int maximumDifference(vector<int>& nums) { 
    int mx = -1; 
    int i = 0, j; 
    while(i < nums.size()) { 
      j = i + 1; 
      while(j < nums.size()) { 
        if(nums[j] > nums[i]) { 
          mx = max(mx, nums[j] - nums[i]); 
        } 
        j++; 
      } 
      i++; 
    } 
    return mx; 
  } 
};
