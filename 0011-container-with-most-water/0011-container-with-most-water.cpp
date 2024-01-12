class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxi=0,j=h.size()-1,i=0;
        while(i<j)
        {
                if(h[i]>h[j])
                {
                    maxi=max(maxi,h[j]*(j-i));
                    j--;
                }
                else
                {
                    maxi=max(maxi,h[i]*(j-i));
                    i++;
                }
            
        }
        return maxi;
    }
};