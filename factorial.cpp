#include<iostream>
using namespace std;
class Solution{
public:
    // int factorial(int n){
    //     int fact=1;
    //     for(int i=n;i>1;i--)
    //     {
    //         fact*=i;
    //     }
    //     return fact;

    // }
    int factorial(int n)
    {
        if(n==1||n==0) return 1;
       return n*factorial(n-1);
    }
    
};