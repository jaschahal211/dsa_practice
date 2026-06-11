#include<iostream>
using namespace std;
class Solution{
public:
    void max_min_digit(int n){

        int maxdigit=INT_MIN;
        int mindigit=INT_MAX;
        while(n>0)
        {
            int rem=n%10;
            maxdigit=max(maxdigit,rem);
            mindigit=min(mindigit,rem);
            n=n/10;
        }
        cout<<"Largest digit:"<<maxdigit<<"and smallest digit:"<<mindigit;
    }
};