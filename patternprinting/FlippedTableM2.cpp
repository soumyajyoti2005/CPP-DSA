#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no of row: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j <= i || i + j >= 2 * n + 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}