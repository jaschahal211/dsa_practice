#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> primerange(int a, int b)
    {
        vector<int> result;
        for (int i = a; i <= b; i++)
        {
            bool ans = prime(i);
            if (ans == true)
            {
                result.push_back(i);
            }
        }
        return result;
    }
    bool prime(int num)
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        return count == 2;
    }
};