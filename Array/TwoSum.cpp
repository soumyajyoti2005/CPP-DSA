#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "enter the no of elements in array: ";
    cin >> n;
    int a[n];
    cout << "enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the sum value want: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] + a[j] == x)
            {
                cout << "doublet pair: " << "(" << a[i] << "," << a[j] << ")" << endl;
            }
        }
    }
}