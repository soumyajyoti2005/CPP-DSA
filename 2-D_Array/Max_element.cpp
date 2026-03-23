#include <iostream>
using namespace std;
int main()
{
    int r, c, max;
    cout << "enter no of row: ";
    cin >> r;
    cout << "enter no of column : ";
    cin >> c;
    int a[r][c];
    cout << "enter elments in 2D array  : ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    max = a[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    cout << max;
}