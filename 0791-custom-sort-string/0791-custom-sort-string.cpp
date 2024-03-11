class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        unordered_map<char,int> mp;
        for(auto &i:s){
           mp[i]++;
        }
        for(auto &j:order)
        {
            if(mp.find(j)!=mp.end())
            {
                ans.append(mp[j],j);
                mp.erase(j);
            }
        }
        for(auto &i:mp)
        {
            ans.append(i.second,i.first);
        }
        return ans;
    }
};