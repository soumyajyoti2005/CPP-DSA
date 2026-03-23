#include <iostream>
using namespace std;
int main()
{
    int r, c, s = 0, key;
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
    cout << "enter the value have to found: ";
    cin >> key;
    int i = 0, j = 0;
    while (j < c)
    {
        if (a[i][j] == key)
        {
            cout << key << " found";
            break;
        }

        if (a[i + 1][j] < key)
            i++;

        else
            j++;
    }
    if (j == c)
        cout << key << " not found";
}