#include<iostream>
using namespace std;
class Solution{
    string changeCase(string s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i])){
            s[i]=tolower(s[i]);
            }
            else{
                s[i]=toupper(s[i]);
            }
        }
        return s;
    }

};