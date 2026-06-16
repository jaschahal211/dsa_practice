#include <iostream>
using namespace std;
class Solution
{
public:
    int sumDigits(string s)
    {
        int sum = 0;
        int num = 0;
        for (char ch : s)
        {
            if (isdigit(ch))
            {
                num = num * 10 + (ch - '0');
            }
            else
            {
                sum += num;
                num = 0;
            }
        }
        sum += num; // for last number
        return sum;
    }
};