#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int x, n;
    cout << "enter the size of array: ";
    cin >> n;
    cout << "enter elements in array from 1 to n-1 consisting 1 element duplicate: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v.at(j) == v.at(i))
            {
                cout << "duplicate element is :" << v.at(i);
                break;
            }
        }
    }
}