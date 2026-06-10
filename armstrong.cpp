#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
public:
    bool armstrong(int num)
    {
        int digit = digits(num);
        int val = num;
        int sum = 0;
        while (num > 0)
        {
            int rem = num % 10;
            sum += pow(rem, digit);
            num /= 10;
        }
        return sum == val;
    }
    int digits(int num)
    {
        int digit = 0;
        while (num > 0)
        {
            num /= 10;
            digit++;
        }
        return digit;
    }
};