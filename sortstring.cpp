#include<iostream>
using namespace std;
class solution{
public:
    string sortString(string s)
    {
        if(s.empty()) return "";
        vector<int>asciiv;
        for(char ch:s)
        {
            asciiv.push_back((int)ch);
        }
        sort(asciiv.begin(),asciiv.end());
        for(int i=0;i<asciiv.size();i++)
        {
            s[i]=(char)asciiv[i];
        }
        return s;
    }
};