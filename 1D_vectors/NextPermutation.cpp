#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v, int x, int y)
{
    int t;
    for (int i = x, j = y; i < j; i++, j--)
    {
        t = v.at(i);
        v.at(i) = v.at(j);
        v.at(j) = t;
    }
    return;
}
int main()
{
    int n, x, t;
    vector<int> v;
    cout << "enter no of element in array: ";
    cin >> n;
    cout << "enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int idx = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (v.at(i - 1) < v.at(i))
        {
            idx = i - 1;
            break;
        }
    }
    if (idx == -1)
    {
        reverse(v, 0, n - 1);
    }
    else
    {
        reverse(v, idx + 1, n - 1);
        for (int i = idx + 1; i < n; i++)
        {
            if (v[idx] < v[i])
            {
                t = v[idx];
                v[idx] = v[i];
                v[i] = t;
                break;
            }
        }
    }

    cout << "the next permutation is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}