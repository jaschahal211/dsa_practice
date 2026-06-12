#include<iostream>
using namespace std;
class Solution{
public:
    void decimaltoOctal(int n)
    {
        if(n==0) cout<<0;
        vector<int>remainder;
        while(n>0)
        {
            int rem=n%8;
            n/=8;
            remainder.push_back(rem);
        }
        remainder=reverse(remainder);
        for(int i=0;i<remainder.size();i++)
        {
            cout<<remainder[i];
        }
    }
    vector<int>reverse(vector<int>v)
    {
        for(int i=0;i<v.size()/2;i++)
        {
            swap(v[i],v[v.size()-1-i]);
        }
        return v;
    }

};