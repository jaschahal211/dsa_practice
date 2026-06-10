// #include<iostream>
// using namespace std;
// class Solution{
//     vector<pair<int,int>>symm(vector<pair<int,int>>v)
//     {
//         vector<pair<int,int>>result;
//         for(int i=0;i<v.size();i++)
//         {
//             for(int j=i+1;j<v.size();j++)
//             {
//                 if(v[i].first==v[j].second&&v[i].second==v[j].first)
//                 {
//                     result.push_back({v[i].first,v[i].second});

//                 }

//             }
//         }
//         return result;
//     }

// };


#include<iostream>
#include<map>
using namespace std;
class Solution{
    vector<vector<int>>symm(vector<vector<int>>v)
    {
       unordered_map<int,int>mpp;
       vector<vector<int>>result;
        for(int i=0;i<v.size();i++)
        {
            int first=v[i][0];
            int second =v[i][1];
            if(mpp.find(second)!=mpp.end()&&mpp[second]==first)
            {
                result.push_back({first,second});

            }
            else{
                mpp[first]=second;
            }


        }
        return result;
    }

};