#include<iostream>
using namespace std;
class Solution{
public:
    int sumofarray(vector<int>v)
    {
        int sum=v[0];
        for(int i=1;i<v.size();i++)
        {
            sum+=v[i];
        }
        return sum;
    }
};