#include<iostream>
#include<map>
using namespace std;
class Solution{
public:
    string removeDuplicate(string s)
    {
        unordered_map<char,int>mpp;
        string newstring="";
        for(char ch:s)
        {
            mpp[ch]++;
            if(mpp[ch]==1)
            {
                newstring+=ch;
            }
        }
        return newstring;
    }
};