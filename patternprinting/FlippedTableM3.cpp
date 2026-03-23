#include <iostream>
using namespace std;
int main()
{
    int n, nst, nsp;
    cout << "enter no of row: ";
    cin >> n;
    nst = 1, nsp = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
            cout << "* ";
        for (int k = 1; k <= nsp; k++)
            cout << "  ";
        for (int l = 1; l <= nst; l++)
            cout << "* ";

        nst++;
        nsp -= 2;
        cout << endl;
    }
}