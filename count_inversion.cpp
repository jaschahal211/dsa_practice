#include<iostream>
using namespace std;
class Solution {
public:
   long long int numberOfInversions(vector<int> nums) {
    return mergeSort(nums,0,nums.size()-1);
    }
    long long int mergeSort(vector<int>nums,int low,int high){
        long long int count=0;
        if(low>=high) return count;//here
        int mid=(low+high)/2;
        count+=mergeSort(nums,low,mid);//here
        count+=mergeSort(nums,mid+1,high);//here
        count+=merge(nums,low,mid,high); //here
        return count;//here
    }
    long long int merge(vector<int>nums,int low,int mid,int high)
    {
        long long int count=0;
        vector<int>ans;
        int i=low,j=mid+1;
        while(i<=mid&&j<=high)
        {
            if(nums[i]<=nums[j])
            {
                ans.push_back(nums[i]);
                i++;
            }
            else
            {
                count+=mid-i+1; //formula and count
                ans.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid)
        {
            ans.push_back(nums[i]);
            i++;
        }
        while(j<=high)
        {
            ans.push_back(nums[j]);
            j++;
        }
        for(int i=low;i<=high;i++)
        {
            nums[i]=ans[i-low];
        }
        return count; //count return
    }
};