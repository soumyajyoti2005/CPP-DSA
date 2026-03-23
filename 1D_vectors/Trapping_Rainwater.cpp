//not giving correct output
#include <iostream>
#include <vector>
using namespace std;
int min(int x, int y)
{
    if (x > y)
        return y;
    else
        return x;
}

int main()
{
    vector<int> v;
    int n, x;
    cout << "enter no of element in vector: ";
    cin >> n;
    cout << "enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int max, smax;
    max = v[0];
    for (int i = 1; i < n; i++)
    {
        if (max < v[i])
        {
            smax = max;
            max = v[i];
        }
    }
    if (max == v[0])
    {
        smax = v[1];
        for (int i = 2; i < n; i++)
        {
            if (smax < v[i])
            {
                smax = v[i];
            }
        }
    }
    int i, j, diff, s = 0, k, c = 0, m = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == max)
            m++;
    }
    if (((v[0] == max && v[n - 1] == smax) || (v[0] == smax && v[n - 1] == max)) && m == 1)
    {
        diff = min(v[0], v[n - 1]);
        for (int i = 1; i <= n - 2; i++)
        {
            s = s + diff - v[i];
        }
    }
    else
    {
        i = 0;
        j = 0;
        while (i < n)
        {
            if (v[i] >= v[j])
            {
                diff = min(v[i], v[j]);
                for (int y = j + 1; y < i; y++)
                {
                    s = s + diff - v[y];
                }
                j = i;
            }
            else if (v[i - 1] > v[i] && v[i + 1] > v[i])
            {
                k = i;
                for (int k = i + 2; k < n; k++)
                {
                    if (v[k] >= v[j])
                        c++;
                }
                if (c == 0)
                    j = i - 1;
            }
            i++;
        }
    }
    cout << endl
         << s;
}
