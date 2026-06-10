#include<iostream>
using namespace std;
class Solution{
    public:
    vector<int>remove_duplicates(vector<int>v)
    {
        vector<int>result;
        result.push_back(v[0]);
        for(int i=1;i<v.size();i++)
        {
            if(v[i]!=v[i-1])
            {
                result.push_back(v[i]);
            }
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
    s.remove_duplicates(v);
    return 0;
}