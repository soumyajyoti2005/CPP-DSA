#include <iostream>
#include <vector>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
        f = f * i;
    return f;
}
int perm(int n, int r)
{
    int npr = fact(n) / fact(n - r);
    return npr;
}
int comb(int n, int r)
{
    int ncr = (fact(n)) / (fact(r) * fact(n - r));
    return ncr;
}
int main()
{
    int r;
    cout << "enter no of row: ";
    cin >> r;
    vector<vector<int>> v;
    for (int i = 1; i <= r; i++)
    {
        vector<int> a(i);
        v.push_back(a);
    }
    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            v[i][j] = comb(i, j);
        }
    }
    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}