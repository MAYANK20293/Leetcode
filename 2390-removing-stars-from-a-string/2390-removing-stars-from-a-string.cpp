class Solution {
public:
    string removeStars(string s) {
        
        int i=0;
        while(s.size()>i)
        {
            if(s[i]=='*')
            {
                s.erase(s.begin()+i-1,s.begin()+i+1);
                i--;
            }
            else 
            i++;

        }
        return s;
    }
};