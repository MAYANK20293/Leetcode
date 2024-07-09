class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int a;
        for(auto j:customers)
        {
             a=j[0];
            break;
        }
        
        double anss=0;
        for(auto i:customers)
        {
           // int a=i[0];
            if(a<i[0])
            {
                a=i[0];
            }
            int b=a+i[1];
            anss+=b-i[0];
            a=b;
        }
        return (anss/customers.size());
    }
};