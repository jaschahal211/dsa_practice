#include<iostream>
using namespace std;
class Solution{
public:
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