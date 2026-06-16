#include <iostream>
#include <map>
using namespace std;
class Solution
{
public:
    void charFrequency(string s)
    {
        map<char, int> mpp;
        for (char ch : s)
        {
            mpp[ch]++;
        }
        for (auto it = mpp.begin(); it != mpp.end(); it++)
        {
            cout << it->first << it->second << " ";
        }
    }
};
