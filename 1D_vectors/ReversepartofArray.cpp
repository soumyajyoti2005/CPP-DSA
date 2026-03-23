#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, x, n1, n2, t;
    cout << "enter no of elements in vector: ";
    cin >> n;
    cout << "enter elements in vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "enter from which index upto which index you want to reverse: ";
    cin >> n1 >> n2;

    for (int i = n1, j = n2; i < j; i++, j--)
    {
        t = v.at(i);
        v.at(i) = v.at(j);
        v.at(j) = t;
    }
    cout << "partially reversed array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
}