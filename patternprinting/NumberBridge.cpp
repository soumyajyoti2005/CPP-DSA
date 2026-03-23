#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cout << "enter no of row : ";
    cin >> n;
    int nst = n - 1, nsp = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        a = 1;
        for (int j = 1; j <= nst; j++)
        {
            cout << a << " ";
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            cout << a << " ";
            a++;
        }
        nst--;
        nsp += 2;
        cout << endl;
    }
}