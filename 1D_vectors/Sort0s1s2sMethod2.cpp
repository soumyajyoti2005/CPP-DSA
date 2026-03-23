#include <iostream>
#include <vector>
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
    vector<int> v;
    int n, x, r, l, m;
    cout << "enter no of elements in array: ";
    cin >> n;
    cout << "enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    l = 0, r = n - 1, m = 0;
    while (r >= m)
    {
        if (v.at(m) == 2)
        {
            swap(&v.at(m), &v.at(r));
            r--;
        }
        else if (v.at(m) == 0)
        {
            swap(&v.at(m), &v.at(l));
            l++;
        }
        else // if (v.at(m) == 1)
        {
            m++;
        }
    }
    cout << "the sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
}