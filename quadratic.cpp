#include<iostream>
using namespace std;
class Solution{
public:
    void roots(int a ,int b,int c)
    {
        int discriminant=(b*b)-4*a*c;
        if(discriminant==0)
        { 
            double ans= (double)(-1*b)/(2*a);
            cout<<"Roots are real and same, i.e ("<<ans<<" , "<<ans<<").";
        }
        else if(discriminant>0)
        {
            double ans1=(double)((-1*b)+(sqrt(discriminant)))/(2*a);
            double ans2=(double)((-1*b)-(sqrt(discriminant)))/(2*a);
            cout<<"Roots are real and different, i.e ("<<ans1<<" , "<<ans2<<").";    
        }
        else{
            double ans1=(double)(-1*b)/(2*a);
            double val1=(double)sqrt(abs(discriminant))/(2*a);
            double val2=(double)sqrt(abs(discriminant))/(2*a);            
            cout<<"Roots are Complex, i.e ("<<ans1<<"+ i"<<val1<<" , "<<ans1<<"- i"<<val2<<").";    
        }
    }
};