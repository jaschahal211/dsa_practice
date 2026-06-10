#include<iostream>
using namespace std;
class Solution{
public:
int linear_search(vector<int>v,int elem)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==elem)
        {
            return i;
        }
    }
    return -1;

}
};