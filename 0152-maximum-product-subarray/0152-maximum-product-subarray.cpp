class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=0;
        if(nums.size()==1)
        return nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            int sum=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                sum=nums[j]*sum;
                ans=max(ans,sum);
            }
        }
        return ans;
    }
};