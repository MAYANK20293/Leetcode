class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int c=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<k)
            c++;
            int sum=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                sum=nums[j]*sum;;
                if(sum<k)
                c++;
                else if(sum>=k)
                break;
            }
        }
        if(nums[nums.size()-1]<k)
            c++;
            
        return c;
    }
};