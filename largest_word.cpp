#include<iostream>
using namespace std;
class Solution{
public:
    string largestWord(string s)
    {
        int maxlength=INT_MIN;
        int currlength=0;
        int startindex=0;
        int maxstartidx;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                
                currlength++;
            }
            else{
                if(maxlength<currlength)
                {
                    maxlength=currlength;
                    maxstartidx=startindex;
                }
                currlength=0;
                startindex=i+1;
            }
        }
        if(maxlength<currlength)
                {
                    maxlength=currlength;
                    maxstartidx=startindex;
                }
        return s.substr(maxstartidx,maxlength);
    }
};