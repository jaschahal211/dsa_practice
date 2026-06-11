#include <iostream>
using namespace std;
class Solution
{
public:
    int greatest(int a, int b, int c)
    {
        if (a >= b && a >= c)
            return a;
        if (b >= a && b >= c)
            return b;
        return c;
    }
};