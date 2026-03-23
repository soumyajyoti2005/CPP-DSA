#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no of row: ";
    cin >> n;
    int nst = 1, nsp = n / 2;
    for (int i = 1; i <= n; i++)
    {
        if (i <= n / 2 + 1)
        {
            for (int j = 1; j <= nsp; j++)
            {
                cout << "  ";
            }
            for (int k = 1; k <= nst; k++)
            {
                cout << "* ";
            }
            nst += 2;
            nsp--;
        }
        if (i > n / 2 + 1)
        {
            for (int j = 1; j <= nsp + 2; j++)
            {
                cout << "  ";
            }
            for (int k = 1; k <= nst - 4; k++)
            {
                cout << "* ";
            }
            nst -= 2;
            nsp++;
        }
        cout << endl;
    }
}