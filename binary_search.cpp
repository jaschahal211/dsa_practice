#include<iostream>
using namespace std;
class Solution{
public:
int binary_search(vector<int>v,int elem)
{
    int low=0,high=v.size()-1;
    while(low<=high){
        int mid=(low+(high-low)/2);
        if(v[mid]==elem)
        {
            return mid;
        }
        if(v[mid]>elem)
        {
            high=mid-1;
        }
        if(v[mid]<elem)
        {
            low=mid+1;
        }
    }
    return -1;
}
};