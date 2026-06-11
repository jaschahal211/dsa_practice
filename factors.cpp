#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int>factors(int n){
    vector<int>result;
    result.push_back(1);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            result.push_back(i);
        }
    }
    result.push_back(n);
    return result;
    }

}; 