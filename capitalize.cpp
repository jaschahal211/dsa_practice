#include<iostream>
using namespace std;
class Solution{
public:
    string capitalize(string s)
    {
        if(s.empty()) return "";
       s[0]=toupper(s[0]);
        for(int i=1;i<s.length()-1;i++)
        {
            if(s[i+1]==' '||s[i+1]=='\n'||s[i+1]=='\t'||s[i-1]==' '||s[i-1]=='\n'||s[i-1]=='\t')
                {
                    s[i]=toupper(s[i]);
                }
        }
        s[s.size()-1]=toupper(s[s.size()-1]);
        return s;
    }
};