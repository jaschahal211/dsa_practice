//sorting elements on the basis of order given by other array;
//both array will have distinct size
#include<iostream>
#include<map>
using namespace std;
class Solution{
public:
    vector<int>order(vector<int>v,vector<int>q)
    {
        map<int,int>mpp;
        vector<int>result;
        for(int num:v)
        {
            mpp[num]++;
        }
        for(int i=0;i<q.size();i++)
        {
            while(mpp[q[i]]>0)
            {
                result.push_back(q[i]);
                mpp[q[i]]--;
            }
        }
        for(auto it=mpp.begin();it!=mpp.end();it++)
        {
            while(it->second>0)
            {
                result.push_back(it->first);
                it->second--;
            }
        }
        return result;
    }

};  