#include<iostream>
#include<map>
using namespace std;
class Solution{
public:
    void stringDuplicate(string s)
    {
        unordered_map<char,int>mpp;
        for(char ch:s)
        {
            mpp[ch]++;
            if(mpp[ch]>1)
            {
                cout<<ch<<" ";
            }
        }
    }
};