#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
        f = f * i;
    return f;
}
int comb(int n, int r)
{
    int ncr = (fact(n)) / (fact(r) * fact(n - r));
    return ncr;
}
int main()
{
    int n;
    cout << "enter no of row: ";
    cin >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 1; i + j <= n - 1; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k <= 2 * i + 1; k++)
        {
            if (k % 2 == 0)
            {
                cout << comb(i, k / 2) << " ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}