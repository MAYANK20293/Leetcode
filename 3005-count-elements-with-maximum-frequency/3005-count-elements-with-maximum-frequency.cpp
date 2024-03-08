class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=0;
        for(auto i:nums)
        mp[i]++;

        int m=0;
        for(auto i:mp)
        m=max(m,i.second);

        for(auto i:mp)
        {
            if(i.second==m)
            ans+=i.second;
        }
        return ans;
    }
};