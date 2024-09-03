class Solution {
public:
    int getLucky(string s, int k) {
        string n="";
        for(char j:s)
        {
            n+=to_string(j-'a'+1);
        }

        while(k>0)
        {
            int temp=0;
            for(char x:n)
            {
                temp+=x -'0';
            }
            n=to_string(temp);
            k--;
        }
        return stoi(n);
        
    }
};