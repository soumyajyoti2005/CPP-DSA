#include <iostream>
using namespace std;
int main()
{
    int n, x, t;
    cout << "enter the no of elements in array: ";
    cin >> n;
    int a[n];
    cout << "enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    cout << "reversed array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}