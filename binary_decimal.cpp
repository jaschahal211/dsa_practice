#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
public:
    int binaryToDecimal(int n)
    {
        int i = 0, sum = 0, ans = 0;
        while (n > 0)
        {
            int rem = n % 10;
            n /= 10;
            ans = (rem * (pow(2, i)));
            sum += ans;
            i++;
        }
        return sum;
    }
};