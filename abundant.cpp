#include <iostream>
using namespace std;
class Solution
{
public:
    bool abundant(int n)
    {
        int sum=sumdivisors(n);
        return sum>n;
    }
    int sumdivisors(int n) //divisors does not include number itself unlike factors
    {
        int sum=0;
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }
        return sum;

    }
};