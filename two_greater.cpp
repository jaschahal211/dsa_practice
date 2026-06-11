#include <iostream>
using namespace std;
class Solution
{
public:
    int greater(int a, int b)

    {
        if (a < b)
        {
            return b;
        }
        return a;
    }
};