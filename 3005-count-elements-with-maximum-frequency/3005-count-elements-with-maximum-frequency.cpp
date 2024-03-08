class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=0;
        int m=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            m=max(m,mp[i]);
        }
        

        for(auto i:mp)
        {
            
            if(i.second==m)
            ans+=i.second;
        }
        return ans;
    }
};