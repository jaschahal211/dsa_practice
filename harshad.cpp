#include <iostream>
using namespace std;
class Solution
{
public:
    bool harshad(int n)
    {
        int sum = sumdigits(n);
        return (n % sum == 0);
    }
    int sumdigits(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            int rem = n % 10;
            n /= 10;
            sum += rem;
        }
        return sum;
    }
};