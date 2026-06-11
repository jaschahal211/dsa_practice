#include <iostream>
using namespace std;
class Solution
{
public:
    bool strong(int a)
    {
        int val = a;
        int sum = 0;
        while (a > 0)
        {
            int rem = a % 10;
            int fac = factorial(rem);
            sum += fac;
            a /= 10;
        }
        return sum == val;
    }
    int factorial(int n)
    {
        int fac = 1;
        for (int i = n; i > 1; i--)
        {
            fac *= i;
        }
        return fac;
    }
};