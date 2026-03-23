#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int r;
    cout << "enter no of row: ";
    cin >> r;
    int c;
    cout << "enter no of column: ";
    cin >> c;
    vector<vector<int>> v(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }
    int y = 0;
    for (int i = 0; i < r; i++)
    {
        if (v[i][y] == 0)
        {
            for (int j = 0; j < c; j++)
            {
                if (v[i][j] == 0)
                    v[i][j] = 1;
                else
                    v[i][j] = 0;
            }
        }
    }
    int no0, no1;
    for (int j = 0; j < c; j++)
    {
        no0 = 0;
        no1 = 0;
        for (int i = 0; i < r; i++)
        {
            if (v[i][j] == 0)
                no0++;
            else
                no1++;
        }
        if (no0 > no1)
        {
            for (int i = 0; i < r; i++)
            {
                if (v[i][j] == 0)
                    v[i][j] = 1;
                else
                    v[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    int s = 0, p;
    for (int i = 0; i < r; i++)
    {
        p = 1;
        for (int j = c - 1; j >= 0; j--)
        {
            s = s + p * v[i][j];
            p *= 2;
        }
    }
    cout << s;
}