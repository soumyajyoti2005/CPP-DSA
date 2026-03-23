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
int main()
{
    int r, c, s = 0;
    cout << "enter no of row: ";
    cin >> r;
    cout << "enter no of column : ";
    cin >> c;
    int a[r][c]; // c==r square matrix
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
        for (int j = 0; j < r; j++)
        {
            if (j > i)
            {
                swap(&a[i][j], &a[j][i]);
            }
        }
    }
    cout << "the transpose matrix is: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}