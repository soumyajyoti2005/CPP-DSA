#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter no of row of 1st 2D array: ";
    cin >> r;
    cout << "enter no of column of 1st 2D array : ";
    cin >> c;
    int a[r][c];
    cout << "enter elments in 1st 2D array  : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < c; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = c - 1; j >= 0; j--)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}