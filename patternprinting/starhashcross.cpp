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
            // if ((i == j || (i + j) == n + 1) || ((i == 1 || i == n) && (j > 1 && j < n)) || ((j == 1 || j == n) && (i > 1 && i < n)))
            // {
            if (i == j || (i + j) == n + 1)
                cout << "* ";
            else if (((i == 1 || i == n) && (j > 1 && j < n)) || ((j == 1 || j == n) && (i > 1 && i < n)))
                cout << "# ";
            // else if ((j == 1 || j == n) && (i > 1 && i < n))
            //    cout << "# ";
            // }
            else
                cout << "  ";
        }
        cout << endl;
    }
}