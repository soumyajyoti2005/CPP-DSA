#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter no of row: ";
    cin >> r;
    cout << "enter no of column : ";
    cin >> c;
    int a[r][c];
    cout << "enter roll and marks : ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "the table is : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}