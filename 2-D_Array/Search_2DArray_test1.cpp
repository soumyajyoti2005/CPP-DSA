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
    int l = 0, ri = c - 1, t = 0, b = r - 1, midr, midc;
    while ((l <= ri) && (t <= b))
    {
        midr = (l + r) / 2;
        midc = (t + b) / 2;
        if (a[midr][midc] == key)
        {
            cout << "found" << midr << " " << midc;
            s++;
            break;
        }
        if (a[midr][midc] > key)
        {
            b = midr - 1;
            ri = midc - 1;
        }
        if (a[midr][midc] < key)
        {
            l = midc + 1;
            t = midr + 1;
        }
    }
    if (s == 0)
        cout << "not found";
}