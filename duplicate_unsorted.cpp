#include<iostream>
#include<map>
using namespace std;
class Solution{
public:
vector<int>remove_duplicates(vector<int>v)
{
    map<int,int>mpp;
    for(int num:v)
    {
        mpp[num]++;
    }
    v.clear();
    for(auto it=mpp.begin();it!=mpp.end();it++)
    {
        v.push_back(it->first);
    }
    for(int num:v)
    {
        cout<<num<<" ";
    }
    return v;
}
};
int main()
{
    Solution s;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    s.remove_duplicates(v);
    return 0;
}