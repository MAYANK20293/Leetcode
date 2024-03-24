class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums)
        mp[i]++;
        for(auto j:mp)
        {
            if(j.second>1)
            return j.first;
        }
        return -1;
    }
};