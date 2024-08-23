class Solution {
public:
    int fib(int n) {
        int f1=1;
        int f2=0;
        int a;
        for(int i=2;i<=n;i++)
        {
            a=f1+f2;
            f2=f1;
            f1=a;
        }
        return a;
    }
};