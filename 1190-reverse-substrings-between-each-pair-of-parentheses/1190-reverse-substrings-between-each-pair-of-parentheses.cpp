class Solution {
public:
    string reverseParentheses(string s) {
        int a=0;
        bool b=true;
        while(b)
        {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                a=i;
            }
            else if(s[i]==')')
            {
                reverse(s.begin()+a+1,s.begin()+i);
                s.erase(s.begin()+i);
                s.erase(s.begin()+a);
                a=0;
                break;
            }
            b=(find(s.begin(),s.end(),'(')!=s.end());
            

        }
        }
        return s;
    }
};