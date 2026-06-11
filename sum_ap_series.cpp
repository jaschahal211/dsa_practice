#include<iostream>
using namespace std;
class Solution{
public:
    long long sum(int n,int a,int d)
    {
        return 1LL*n*(2*a+(n-1)*d)/2;
    }
};