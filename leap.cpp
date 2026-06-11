#include<iostream>
using namespace std;
class Solution {
public:
    bool leap(int n)
    {
        return((n%400==0)||(n%4==0)&&(n%100!=0));
    }
};