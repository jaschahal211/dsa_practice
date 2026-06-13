#include<iostream>
using namespace std;
class Solution{
public:
    vector<int> octalToBinary(int n){
        int decimal=octalToDecimal(n);
        return decimalToBinary(decimal);
    }
    int octalToDecimal(int n)
    {
         int i=0,decimal=0;
         if(n==0) return 0;
        while(n>0)
        {
            int rem=n%10;
            decimal+=rem*pow(8,i);
            i++;
            n/=10;
        }
        return decimal;
    }
    vector<int> decimalToBinary(int n)
    {
         vector<int>ans;
         if(n==0) return {0};
         while(n>0)
         {
            int rem=n%2;
            n/=2;
            ans.push_back(rem);
         }
         return reverse(ans);

    }
    vector<int>reverse(vector<int>v)
    {
        for(int i=0;i<v.size()/2;i++)
        {
            swap(v[i],v[v.size()-1-i]);
        }
        return v;
    }

};