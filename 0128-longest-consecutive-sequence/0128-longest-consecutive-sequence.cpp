class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
      sort(nums.begin(),nums.end());
      int largest=1, count=0,smaller=INT_MIN;
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]-1==smaller)
          {
              count+=1;
              smaller=nums[i];
          }
          else if(nums[i]!=smaller)
          {
              count=1;
              smaller=nums[i];
          }
          largest=max(largest,count);
      }
      return largest;
    }
};