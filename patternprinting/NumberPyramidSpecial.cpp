#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cout << "enter no of row: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a = 0;
        for (int j = 1; i + j <= n; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k <= i)
            {
                a++;
                cout << a << " ";
            }
            if (k > i)
            {
                a--;
                cout << a << " ";
            }
        }
        cout << endl;
    }
}