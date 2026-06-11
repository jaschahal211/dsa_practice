#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> fibonacii(int n)
    {
        vector<int> result;
        int t1 = 0, t2 = 1;
        result.push_back(t1);
        result.push_back(t2);
        for (int i = 2; i <= n; i++)
        {
            int t3 = t1 + t2;
            result.push_back(t3);
            t1 = t2;
            t2 = t3;
        }
        return result;
    }
};