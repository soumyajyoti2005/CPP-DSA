#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, x, no0 = 0, no1 = 0, no2 = 0;
    cout << "enter no of elements in array: ";
    cin >> n;
    cout << "enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (v.at(i) == 0)
            no0++;
        if (v.at(i) == 1)
            no1++;
        if (v.at(i) == 2)
            no2++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < no0)
            v.at(i) = 0;
        if (i < no1 + no0 && i >= no0)
            v.at(i) = 1;
        if (i < n && i >= no1 + no0)
            v.at(i) = 2;
    }
    cout << "the sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
}