#include <iostream>
using namespace std;
class Solution
{
    bool prime(int num)
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        return count == 2;
    }
};