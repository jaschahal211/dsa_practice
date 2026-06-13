#include<iostream>
using namespace std;
class Solution{
public:
    vector<int>BubbleSort(vector<int>v)
    {
        for(int i=0;i<v.size()-1;i++)
        {
            for(int j=0;j<v.size()-1-i;j++)
            {
                if(v[j]>v[j+1])
                {
                    swap(v[j],v[j+1]);
                }

            }
        }
        return v;
    }
};