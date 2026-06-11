#include<iostream>
using namespace std;
class Solution{
public:
int sum(int a,int b)
{
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        sum+=i;
    }
    return sum;
}
};