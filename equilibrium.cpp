#include <iostream>
using namespace std;
class Solution
{
public:
    int equilibrium(vector<int> v)
    {
        long long total = 0;
        for (int num : v)
        {
            total += num;
        }
        int leftsum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            total -= v[i];
            if (total == leftsum)
            {
                return i;
            }
            leftsum += v[i];
        }
        return -1;
    }
};