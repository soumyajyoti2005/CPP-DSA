#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, x, t;
    cout << "enter no of elements in vector: ";
    cin >> n;
    cout << "enter elements in vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        t = v.at(i);
        v.at(i) = v.at(j);
        v.at(j) = t;
    }
    cout << "reversed array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
}