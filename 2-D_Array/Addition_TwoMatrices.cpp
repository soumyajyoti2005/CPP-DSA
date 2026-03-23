#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2, s = 0;
    cout << "enter no of row of 1st 2D array: ";
    cin >> r1;
    cout << "enter no of column of 1st 2D array : ";
    cin >> c1;
    int a[r1][c1];
    cout << "enter elments in 1st 2D array  : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "enter no of row of 2nd 2D array: ";
    cin >> r2;
    cout << "enter no of column of 2nd 2D array : ";
    cin >> c2;
    int b[r2][c2];
    cout << "enter elments in 2nd 2D array  : " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "the resultant matrix will be : ";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
}