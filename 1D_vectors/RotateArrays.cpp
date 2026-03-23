#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v, int x, int y)
{
    int t;
    for (int i = x, j = y; i < j; i++, j--)
    {
        t = v.at(i);
        v.at(i) = v.at(j);
        v.at(j) = t;
    }
    return;
}
int main()
{
    vector<int> v;
    int n, x, k;
    cout << "enter the size of vector: ";
    cin >> n;
    cout << "enter elements in vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "enter in how many steps want to rotate: ";
    cin >> k;
    reverse(v, n - k, n - 1);
    reverse(v, 0, n - k - 1);
    reverse(v, 0, n - 1);
    cout << "rotate array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
}