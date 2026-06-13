#include <iostream>
using namespace std;
class Solution
{
public:
    void partition(vector<int> &v, int low, int high)
    {
        if (low >= high)
            return;
        int p = quickSort(v, low, high);
        partition(v, low, p - 1);
        partition(v, p + 1, high);
    }
    int quickSort(vector<int> &v, int low, int high)
    {
        int pivot = v[low];
        int i = low+1, j = high;
        while (i <= j)
        {
            while(i<=j&&v[i]<=pivot)
            {
                i++;
            }
            while(i<=j&&v[j]>pivot)
            {
                j--;
            }
            if(i<=j)
            {
                swap(v[i],v[j]);
                i++;
                j--;
            }
        }
        swap(v[j],v[low]);
        return j;
    }
};