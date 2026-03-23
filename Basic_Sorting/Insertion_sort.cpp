#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    int a[n];
    cout << "enter " << n << " value in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (a[j - 1] > a[j])
            {
                int t = a[j - 1];
                a[j - 1] = a[j];
                a[j] = t;
            }
            else
                break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}