#include<iostream>
#include<map>
using namespace std;
class Solution{
public:
vector<int>repeating(vector<int>m)
{
    map<int,int>mpp;
    for(int num:m)
    {
        mpp[num]++;
    }
    m.clear();
    for(auto it=mpp.begin();it!=mpp.end();it++){
        if(it->second!=1)
        {
            m.push_back(it->first);
        }
    }
    return m;
}
};