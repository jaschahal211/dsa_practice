#include<iostream>
using namespace std;
class Solution{
public:
    int asciivalue(char ch)
    {
        cout<<(int)ch;
        return (int)ch;
    }
};
int main()
{
    Solution s;
    s.asciivalue('a');
    return 0;
}