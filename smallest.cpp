#include <iostream>
#include <vector>
#include <sstream>
#include <climits>

using namespace std;
using namespace std;
class Solution{
public:
    int findsmallest(vector<int>v)
    {
        int smallest=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<smallest)
            {
                smallest=v[i];
            }
        }
        cout<<smallest;
        return smallest;
    }

};
int main()
{
    Solution s;
    string line;
    getline(cin,line);
    stringstream ss(line);
    vector<int>v;
    int x;
    while(ss>>x)
    {
        v.push_back(x);
    }
    s.findsmallest(v);
    return 0;
}