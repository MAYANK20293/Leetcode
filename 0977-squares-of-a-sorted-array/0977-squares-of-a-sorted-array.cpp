class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        for(int i =0;i<nums.size();i++)
        {
            
            int j=(nums[i]*nums[i]);
            swap(nums[i],j);
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};