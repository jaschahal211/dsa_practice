#include<iostream>
using namespace std;
class Solution{
public:
    vector<int>reversing(vector<int>v)
    {
            for(int i=0;i<v.size()/2;i++)
            {
                swap(v[i],v[v.size()-1-i]);
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
    s.reversing(v);
    return 0;
}