#include<iostream>
#include<map>
using namespace std;
class Solution{
    vector<int>rank(vector<int>v)
    {
        map<int,int>mpp;
        vector<int>s=v;
        int rank=1;
        sort(s.begin(),s.end());
       for(int i=0;i<v.size();i++){
        if(mpp.find(s[i])==mpp.end()){
        mpp[s[i]]=rank;
        rank++;
        }
       }
       for(int i=0;i<v.size();i++)
       {
        v[i]=mpp[v[i]];
       }
return v;

    }
    
};