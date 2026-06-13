#include <iostream>
using namespace std;
class Solution
{
public:
    void countCharacters(string s)
    {
        int vowel = 0, consonant = 0, whitespace = 0;
        for (char ch : s)
        {
            if (isalpha(ch))
            {
                char newchar = tolower(ch);
                if (newchar == 'a' || newchar == 'e' || newchar == 'i' || newchar == 'o' || newchar == 'u')
                {
                    vowel++;
                }
                else
                {
                    consonant++;
                }
            }
            if (ch == '\n' || ch == ' ' || ch == '\t')
            {
                whitespace++;
            }
        }
    }
};