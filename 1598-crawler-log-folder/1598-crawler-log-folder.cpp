class Solution {
public:
    int minOperations(vector<string>& logs) {
        vector<string> ans;
        for(auto i:logs)
        {
            if(i=="../")
            {
                if(ans.size()==0)
                continue;
                else
                ans.pop_back();
            }
            else if(i=="./")
            continue;
            else 
            {
                ans.push_back(i);
            }
        } 
        return ans.size();
    }
};