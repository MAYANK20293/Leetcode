class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> a;
        for(auto i:edges)
        {
            for(int j=0;j<i.size();j++)
            {
                a.push_back(i[j]);
            }
        }
        unordered_map<int,int> mp;
        for(auto z:a)
        {
            mp[z]++;
        }
        int ans=0;
        int max=0;
        for(auto i:mp)
        {
            if(max < i.second)
            {
                ans=i.first;
                max=i.second;
            }
        }
        return ans;
    }
};