#include <iostream>
using namespace std;
class Solution
{
public:
    bool sumofprime(int n)
    {
        for (int i = 2; i <= n / 2; i++)
        {
            int val = n - i;
            if (prime(i) && prime(val))
            {
                return true;
            }
        }
        return false;
    }

    bool prime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};