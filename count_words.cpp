#include<iostream>
using namespace std;
class Solution{
public:
    int countWords(string s)
    {
        if(s.empty()) return 0;
        int word=0;
        for(char ch:s)
        {
            if(ch!=' '&&ch!='\n'&&ch!='\t')
            {

            }
            else{
                word++;
            }
        }
        return word;
    }
};