#include<iostream>
using namespace std;
class Solution{
public:
    vector<int>InsertionSort(vector<int>v)
    {
        for(int i=1;i<v.size();i++)
        {
            int j=i-1;
            int temp=v[i];
            while(j>=0&&v[j]>temp)
            {
                v[j+1]=v[j];
                j--;
            }
            v[j+1]=temp;
        }
        return v;
    }
};