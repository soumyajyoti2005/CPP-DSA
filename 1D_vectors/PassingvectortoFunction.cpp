#include <iostream>
#include <vector>
using namespace std;
void change(vector<int> &a)
{
    a.at(0) = 10;
}
int main()
{
    vector<int> v;
    v.push_back(4); // 0th
    v.push_back(9); // 1st
    v.push_back(3); // 2nd
    v.push_back(6);
    v.push_back(1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    change(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}