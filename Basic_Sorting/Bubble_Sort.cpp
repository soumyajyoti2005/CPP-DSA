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
    int c;
    for (int pass = 1; pass <= n - 1; pass++)
    {
        for (int step = 0; pass + step <= n - 1; step++)
        {
            if (a[step] > a[step + 1])
            {
                my_swap(&a[step], &a[step + 1]);
            }
        }

        if (n >= 2)
        {
            c = 0;
            int i = 0, j = 1;
            while (j <= n - 1)
            {
                if (a[i] > a[j])
                {
                    c++;
                    break;
                }
                i++;
                j++;
            }
        }
        if (c == 0)
        {
            cout << "this happen" << endl;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}