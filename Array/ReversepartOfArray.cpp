#include <iostream>
using namespace std;
int main()
{
    int n, x, n1, n2, t;
    cout << "enter the no of elements in array: ";
    cin >> n;
    int a[n];
    cout << "enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter from which index upto which index you want to reverse: ";
    cin >> n1 >> n2;
    for (int i = n1, j = n2; i < j; i++, j--)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    cout << "partially reversed array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}