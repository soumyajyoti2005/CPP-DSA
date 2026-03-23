#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no of elements in array: ";
    cin >> n;
    int a[n];
    cout << "enter values in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    int smax = a[1];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else
            smax = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > smax && a[i] < max)
            smax = a[i];
        // elseif(a[i]<max)
    }
    cout << "max " << max << "smax " << smax;
}