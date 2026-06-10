#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> add_element_first(vector<int> v, int element)
    {
        v.resize(v.size() + 1);

        for (int i = v.size() - 1; i >= 0; i--)
        {
            v[i + 1] = v[i];
        }
        v[0] = element;
        return v;
    }
    vector<int> add_element_end(vector<int> v, int num)
    {
        v.resize(v.size() + 1);

        v[v.size() - 1] = num;
        return v;
    }
    vector<int> add_element_specific(vector<int> v, int num, int index)
    {
        v.resize(v.size() + 1);

        for (int i = v.size() - 1; i >= index; i--)
        {
            v[i + 1] = v[i];
        }
        v[index] = num;
        return v;
    }
    void print(vector<int> v)
    {

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
};
int main()
{
    Solution s;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> m = s.add_element_first(v, 8);
    cout << "after adding first:\n";
    s.print(m);
    vector<int> x = s.add_element_end(v, 9);
    cout << "after adding end:\n";
    s.print(x);
    vector<int> g = s.add_element_specific(v, 6, 3);
    cout << "after adding specific:\n";
    s.print(g);
}