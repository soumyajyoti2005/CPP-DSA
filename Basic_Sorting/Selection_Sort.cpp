#include <iostream>
using namespace std;
void my_swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
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
    int min;
    int idx;
    for (int i = 0; i <= n - 2; i++)
    {
        min = a[i];
        idx = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                idx = j;
            }
        }
        my_swap(&a[idx], &a[i]);
    }
    for (int x : a)
    {
        cout << x << " ";
    }
}
