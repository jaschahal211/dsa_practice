#include<iostream>
using namespace std;
class Solution{
    public:
    int max_product(vector<int>v)
    {
        int pre=1;
        int suf=1;
        int maxans=INT_MIN;
        for(int i=0;i<v.size();i++)
        {
            if(pre==0) pre=1;
            if(suf==0) suf=1;
            pre*=v[i];
            suf*=v[v.size()-1-i];
            maxans=max(maxans,max(pre,suf));
        }
        return maxans;

    }

};