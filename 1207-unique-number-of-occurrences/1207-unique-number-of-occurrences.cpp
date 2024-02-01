class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto i:arr)
        mp[i]++;

        vector<int> a;
        for(auto j:mp)
        a.push_back(j.second);

        sort(a.begin(),a.end());
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]==a[i+1])
            return false;
        }
        return true;
    }
};