#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no of row: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
                cout << "* ";
            else
                cout << "  ";
        }
        for (int k = 1; k <= n; k++)
        {
            if (i + k <= n)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }
}