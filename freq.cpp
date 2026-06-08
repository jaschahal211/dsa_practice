#include<map>
#include<iostream>
using namespace std;
class Solution{
    public:
    vector<int>freq(vector<int>v)
    {
        map<int,int>mpp;
        vector<int>result;
        for(int num:v)
        {
            mpp[num]++;
        }
        for(auto it=mpp.begin();it!=mpp.end();it++)
        {
            result.push_back(it->second);
        }
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<<" ";
        }
        return result;
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
    s.freq(v);
    return 0;
}