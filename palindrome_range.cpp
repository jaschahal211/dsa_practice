#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> palindromerange(int a, int b)
    {
        vector<int> result;
        for (int i = a; i <= b; i++)
        {
            bool ans = palindrome(i);
            if (ans == true)
            {
                result.push_back(i);
            }
        }
        return result;
    }
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