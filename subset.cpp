#include <iostream>
using namespace std;
class Solution
{
public:
    bool subset(vector<int> a, vector<int> b)
    {
        if (a.size() > b.size())
            return false;
        sort(b.begin(), b.end());
        for (int i = 0; i < a.size(); i++)
        {
            bool ans = false;
            int low = 0, high = b.size() - 1;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (a[i] == b[mid])
                {
                    ans = true;
                    break;
                }
                if (a[i] < b[mid])
                {
                    high = mid - 1;
                }
                if (a[i] > b[mid])
                {
                    low = mid + 1;
                }
            }
            if (ans == false)
            {
                return false;
            }
        }
        return true;
    }
};