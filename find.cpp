#include<iostream>
using namespace std;
class Solution{
    public:
    int stingfind(string a,string b)
    {
        if(a.find(b)!=string::npos)
        return a.find(b);
        return -1;
    }
};