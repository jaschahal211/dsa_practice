#include <iostream>
using namespace std;
class Solution
{
public:
    void numberWords(int n)
    {
        string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        if (n == 0)
        {
            cout << "Zero";
            return;
        }
        if (n >= 1000)
        {
            cout << ones[n / 1000] << " Thousand  ";
            n = n % 1000;
        }
        if (n >= 100)
        {
            cout << ones[n / 100] << " Hundred ";
            n = n % 100;
        }
        if (n >= 10 && n <= 19)
        {
            cout << teens[n % 10];
        }
        else
        {
            if (n >= 20)
            {
                cout << tens[n / 10];
            }
            cout << ones[n % 10];
        }
    }
};