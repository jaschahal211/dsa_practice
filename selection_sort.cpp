#include<iostream>
using namespace std;
class Solution{
public:
    vector<int>SelectionSort(vector<int>v)
    {
        for(int i=0;i<v.size();i++)
        {
            int min=i;
            for(int j=i+1;j<v.size();j++)
            {
                if(v[j]<v[min])
                {
                    min=j;
                }
            }
            if(min!=i)
            {
                swap(v[min],v[i]);
            }
        }
        return v;
    }
};