#include <iostream>
using namespace std;
class Solution
{
public:
    bool perfect(int num)
    {
        int sum = 0;
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }
        return sum == num;
    }
};