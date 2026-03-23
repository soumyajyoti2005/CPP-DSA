#include <iostream>
using namespace std;
int main()
{
    int r, c, count = 0;
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
    int minr = 0, minc = 0, maxr = r - 1, maxc = c - 1;
    while (count < r * c)
    {
        for (int i = minc; i <= maxc && count < r * c; i++)
        {
            cout << a[minr][i] << " ";
            count++;
        }

        minr++;

        for (int i = minr; i <= maxr && count < r * c; i++)
        {
            cout << a[i][maxc] << " ";
            count++;
        }

        maxc--;

        for (int i = maxc; i >= minc && count < r * c; i--)
        {
            cout << a[maxr][i] << " ";
            count++;
        }

        maxr--;

        for (int i = maxr; i >= minr && count < r * c; i--)
        {
            cout << a[i][minc] << " ";
            count++;
        }

        minc++;
    }
}