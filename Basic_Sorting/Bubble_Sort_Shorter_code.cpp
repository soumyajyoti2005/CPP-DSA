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
    for (int pass = 1; pass <= n - 1; pass++)
    {
        bool flag = true;
        for (int step = 0; pass + step <= n - 1; step++)
        {
            if (a[step] > a[step + 1])
            {
                my_swap(&a[step], &a[step + 1]);
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}