#include<iostream>
using namespace std; 
class Solution{
    int gcd(int a,int b)
    {
        while(b>0)
        {
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;

    }
};