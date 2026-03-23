// this is only applicable for 0 and 1 array;
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, x, no0 = 0, no1 = 0;
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
        else
            no1++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < no0)
            v.at(i) = 0;
        else
            v.at(i) = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
}