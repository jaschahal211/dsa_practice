#include<iostream>
using namespace std;
class Solution{
public:
    vector<int>increase_decrease(vector<int>v){
        sort(v.begin(),v.end());
        if(v.size()%2==0)
        {
         reverse(v.begin()+v.size()/2,v.end());
        }
        else{
         reverse(v.begin()+(v.size()/2)+1,v.end());
        }
        return v;
    }
};