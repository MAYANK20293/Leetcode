class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        for(auto i:logs)
        {
            if(i=="../")
            {
                if(ans==0)
                continue;
                else
                ans--;
            }
            else if(i=="./")
            continue;
            else{
                ans++;
            }
        }
        return ans;
    }
};