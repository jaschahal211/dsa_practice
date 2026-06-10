#include <iostream>
using namespace std;
class Solution
{
public:
    bool palindrome(int num)
    {
        int rev = 0, rem = 0;
        int val = num;
        while (num > 0)
        {
            rem = num % 10;
            num = num / 10;
            rev = rev * 10 + rem;
        }
        return val == rev;
    }
};