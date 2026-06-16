#include<iostream>
#include<map>
using namespace std;
class Solution{
public:
    string removeCharacter(string a,string b)
    {
        map<char,int>mpp;
        string newstring="";
        for(char ch:b)
        {
            mpp[ch]++;
        }
        for(char ch :a)
        {
            if(!mpp[ch])
            {
              newstring+=ch;
            }
        }
        return newstring;
    }

};