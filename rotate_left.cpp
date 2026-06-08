#include<iostream>
using namespace std;
class Solution{
public:
vector<int>rotateleft(vector<int>v,int k)
{
    vector<int>nums(v.size());
    for(int i=0;i<v.size();i++)
    {
        nums[((v.size()-k)+i)%v.size()]=v[i];
    }
    return nums;
}
};