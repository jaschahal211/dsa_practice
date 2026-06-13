#include<iostream>
#include<string>
using namespace std;
class Solution{
public:
    bool palindrome_string(string s,int low,int high)
    {
        if(low>=high) return true;
        if(s[low]!=s[high])
        return false;
        return palindrome_string(s,low+1,high-1);
    }
};
int main()
{
    Solution s;
    string h;
    getline(cin,h);
    s.palindrome_string(h,0,h.length()-1);
    return 0;
}