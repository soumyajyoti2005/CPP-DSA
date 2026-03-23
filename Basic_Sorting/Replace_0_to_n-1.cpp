#include <iostream>
using namespace std;
int main()
{
    int a[] = {-2, -8, -26, 4, 9};
    int n = 5;
    int minidx;
    for (int i = 0; i <= n - 1; i++)
    {
        int min = INT32_MAX;
        for (int j = 0; j <= n - 1; j++)
        {
            if (a[j] >= i && min > a[j])
            {
                min = a[j];
                minidx = j;
            }
        }
        a[minidx] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}