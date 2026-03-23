#include <iostream>
#include <vector>
using namespace std;
void rem_num(vector<int> &x, vector<int> &v, int idx)
{
    if (idx == v.size())
    {
        for (int i = 0; i < x.size(); i++)
        {
            cout << x[i] << " ";
        }
        return;
    }
    if (v[idx] != 2)
    {
        x.push_back(v[idx]);
    }
    rem_num(x, v, idx + 1);
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(6);
    v.push_back(5);
    vector<int> x;
    rem_num(x, v, 0);
}