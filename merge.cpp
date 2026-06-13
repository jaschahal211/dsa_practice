#include <iostream>
using namespace std;
class Solution
{
public:
    void mergesort(vector<int> &v, int low, int high)
    {
        if (low >= high)
            return;
        int mid = (low + high) / 2;
        mergesort(v, low, mid);
        mergesort(v, mid + 1, high);
        merge(v, low, mid, high);
    }
    void merge(vector<int> &v, int low, int mid, int high)
    {
        vector<int> temp;
        int i = low, j = mid + 1;
        while (i <= mid && j <= high)
        {
            if (v[i] < v[j])
            {
                temp.push_back(v[i]);
                i++;
            }
            else
            {
                temp.push_back(v[j]);
                j++;
            }
        }
        while (i <= mid)
        {
            temp.push_back(v[i]);
            i++;
        }
        while (j <= high)
        {
            temp.push_back(v[j]);
            j++;
        }
        for (int i = low; i <= high; i++)
        {
            v[i] = temp[i - low];
        }
    }
};