#include<iostream>
#include<map>
using namespace std;
class Solution{
    bool anagram(string s,string d)
    {
         if(s.length() != d.length())
        return false;
        map<char,int>mpp;
        for(char ch:s)
        {
            mpp[ch]++;
        }
        for(char dh:d)
        {
            mpp[dh]--;
        }
        for(auto it=mpp.begin();it!=mpp.end();it++)
        {
            if(it->second!=0)
            {
                return false;
            }
        }
        return true;


    }
    
};