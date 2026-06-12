#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
public:
    int replacezero(int n)
    {
        if (n == 0)
            return 1;
        int val = n;
        int i = -1;
        while (n > 0)
        {
            int rem = n % 10;
            n /= 10;
            i++;
            if (rem == 0)
            {
                val += pow(10, i);
            }
        }
        return val;
    }
};