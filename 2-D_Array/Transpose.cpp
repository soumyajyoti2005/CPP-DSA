#include <iostream>
using namespace std;
int main()
{
    int r, c, s = 0;
    cout << "enter no of row: ";
    cin >> r;
    cout << "enter no of column : ";
    cin >> c;
    int a[r][c];
    cout << "enter elments in 2D array  : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    cout << "the transpose matrix is : " << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}