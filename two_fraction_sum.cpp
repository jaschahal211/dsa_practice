#include <iostream>
using namespace std;
class Solution
{
public:
    void fractionsum(int num1, int den1, int num2, int den2)
    {
        int lcmv = (den1 * den2) / gcd(den1, den2);
        int a = lcmv / den1;
        int b = lcmv / den2;
        int val = (a * num1) + (b * num2);
        int numerator = val / gcd(val, lcmv);
        int denominator = lcmv / gcd(val, lcmv);
        if (denominator == 1)
        {
            cout << numerator;
        }
        else
        {
            cout << numerator << "/" << denominator;
        }
    }
    int gcd(int a, int b)
    {
        while (b > 0)
        {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
};