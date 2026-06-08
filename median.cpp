#include <iostream>
using namespace std;
class Solution
{
public:
    int median(vector<int> v)
    {
        sort(v.begin(), v.end());
        int ans = 0;
        if (v.size() % 2 == 0)
        {
            ans = (v[(v.size() / 2) - 1] + v[v.size() / 2]) / 2;
        }
        else
        {
            ans = v[v.size() / 2];
        }
        return ans;
    }
};