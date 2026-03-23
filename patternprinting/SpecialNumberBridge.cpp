#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cout << "enter no of row : ";
    cin >> n;
    int nst = n - 1, nsp = 1;
    a = 0;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
            a++;
        else
            a--;
        cout << a << " ";
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        a = 0;
        for (int j = 1; j <= nst; j++)
        {
            a++;
            cout << a << " ";
        }
        for (int k = 1; k <= nsp; k++)
        {
            if (k <= i)
                a++;
            else
                a--;
            cout << "  ";
        }
        for (int l = 1; l <= nst; l++)
        {
            a--;
            cout << a << " ";
        }
        nst--;
        nsp += 2;
        cout << endl;
    }
}