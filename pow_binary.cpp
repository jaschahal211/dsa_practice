// power answer using binary exponentiation
#include <iostream>
using namespace std;
class Solution
{
public:
    int power(int n, int a)
    {
        int ans = 1;
        while (a >0)
        {
            if (a % 2 == 0)
            {
                a /= 2;
                n *= n;
            }
            else{
            a -= 1;
            ans *= n;
            }
        }
        return ans;
    }
};