#include <iostream>
using namespace std;
void reverse(int a[], int x, int y)
{
    int t;
    for (int i = x, j = y; i < j; i++, j--)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
}
int main()
{
    int n, k;
    cout << "enter no of element in array: ";
    cin >> n;
    int a[n];
    cout << "enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter in how many steps have to rotate: ";
    cin >> k;
    reverse(a, n - k, n - 1);
    reverse(a, 0, n - k - 1);
    reverse(a, 0, n - 1);
    cout << "the reverse array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}