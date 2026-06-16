#include <iostream>
using namespace std;
class Solution
{
public:
    string lexographicallyChange(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'Z')
            {
                s[i] = 'A';
            }
            else if (s[i] == 'z')
            {
                s[i] = 'a';
            }
            else
            {
                int d = s[i];
                s[i] = (char)(d + 1);
            }
        }
        return s;
    }
};