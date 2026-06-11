#include<iostream>
#include<cmath>
using namespace std;
class Solution{
    public:
    bool automorphic(int n)
    {
        if(n==0) return true; //edge case
        long long sqaure=1LL*n*n;
        int reverse=rev(n);
        int rev=0;
        while(sqaure>0)
        {
            int rem=sqaure%10;
            sqaure/=10;
            rev=rev*10+rem;
            if(rev==reverse)
            {
                return true;
            }

        }
        return false;
    }
    int rev(int n)
    {
        int rev=0;
        while(n>0)
        {
            int rem=n%10;
            n/=10;
            rev=rev*10+rem;
        }
        return rev;
    }
};