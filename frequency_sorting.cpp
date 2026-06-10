#include<iostream>
#include<map>
using namespace std;
class Solution{
public:
vector<int>frequency_sorting(vector<int>v){
    map<int,int>mpp;
    for(int num:v)
    {
        mpp[num]++;
    }
    auto cmp=[&](int a ,int b)
    {
        if(mpp[a]!=mpp[b]) return mpp[a]>mpp[b];
        return a<b;

    };
    sort(v.begin(),v.end(),cmp);
    return v;



}
};