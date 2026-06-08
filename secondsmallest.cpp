//finding second smallest as well second largest
#include<iostream>
using namespace std;
class Solution{
    public:
        vector<int> findsecond(vector<int>v)
        {
            int smallest=INT_MAX,s_smallest=INT_MAX,largest=INT_MIN,s_largest=INT_MIN;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]<smallest)
                {
                    s_smallest=smallest;
                    smallest=v[i];
                }
                if(v[i]>smallest&&v[i]<s_smallest)
                {
                     s_smallest=v[i];
                }
                if(v[i]>largest)
                {
                    s_largest=largest; 
                    largest=v[i];
                }
                if(v[i]<largest&&v[i]>s_largest)
                {
                    s_largest=v[i];
                }
            }
            if(s_smallest==INT_MIN)
            {
                s_smallest=-1;
            }
            if(s_largest==INT_MAX)
            {
                s_largest=-1;
            }
            cout<<"output"<<endl;
            cout<<s_smallest<<endl;
            cout<<s_largest;
            return {s_smallest,s_largest};

        }
};
int main()
{
    Solution s;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    s.findsecond(v);
    return 0;
}