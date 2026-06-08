#include<iostream>
using namespace std;
class Solution{
public:
    int findlargest(vector<int>v)
    {
        int largest=v[0];
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>largest)
            {
                largest=v[i];
            }
        }
        cout<<largest;
        return largest;
    }
};
int main()
{
    Solution s;
    int x;
    vector<int>v;
    while(cin>>x)
    {
        v.push_back(x);
    }
    s.findlargest(v);
    return 0;
}