#include<iostream>
#include<cmath>
using namespace std;
class Solution{
public:
    long long gp_sum(int a,int r,int n)
    {
        if(r==1)
        {
            return 1LL*a*n;
        }
        if(r>1)
        {
            return (1LL*a*(pow(r,n)-1))/(r-1);
        }
       return  (1LL*a*(1-pow(r,n)))/(1-r);
    }
};