#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    return;
}
void reverse(int a[], int x, int y)
{
    int t;
    for (int i = x, j = y; i < j; i++, j--)
    {
        swap(a[i], a[j]);
    }
}
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
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j > i)
                swap(&a[i][j], &a[j][i]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        reverse(a[i], 0, c - 1);
    }
    cout << "the rotate photo is : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}