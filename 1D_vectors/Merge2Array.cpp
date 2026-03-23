#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, k, m, n, x;
    vector<int> v1;
    vector<int> v2;
    vector<int> res(50);
    cout << "enter no of element in 1st array: ";
    cin >> m;
    cout << "enter values in 1st array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    cout << "enter no of element in 2nd array: ";
    cin >> n;
    cout << "enter elements in 2nd array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v2.push_back(x);
    }
    i = 0;
    j = 0;
    k = 0;
    while (i <= m - 1 && j <= n - 1)
    {
        if (v1[i] > v2[j])
        {
            res[k] = v2[j];
            j++;
        }
        else
        {
            res[k] = v1[i];
            i++;
        }
        k++;
    }
    if (i == m)
    {
        while (j <= n - 1)
        {
            res[k] = v2[j];
            k++;
            j++;
        }
    }
    if (j == n)
    {
        while (i <= m - 1)
        {
            res[k] = v1[i];
            k++;
            i++;
        }
    }
    for (int k = 0; k < m + n; k++)
    {
        cout << res[k] << " ";
    }
}