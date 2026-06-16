#include<iostream>
#include<map>
using namespace std;
class Solution{
public:
    char maxfrequency(string s)
    {
        map<char,int>mpp;
        if(s.empty()) return '\0';
        char ans;
        int maxfreq=INT_MIN;
        for(int ch:s)
        {
            mpp[ch]++;
        }
        for(auto it=mpp.begin();it!=mpp.end();it++)
        {
            if(maxfreq<(it->second))
            {
                maxfreq=it->second;
                ans=it->first;
            }
        }
        return ans;
    }
};