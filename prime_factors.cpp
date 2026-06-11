#include<iostream>
using namespace std;
class Solution{
public:
    vector<int>primeFactors(int n)
    {
        vector<int>result;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0&&prime(i))
            {
                result.push_back(i);
            }
        }
        return result;
    }
    bool prime(int n)
    {
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0){
            count++;
            }
        }
        return count==2;
    }
};