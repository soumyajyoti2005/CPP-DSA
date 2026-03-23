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
    int n, x;
    cout << "enter no of elements in array: ";
    cin >> n;
    cout << "enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int i, j;
    i = 0, j = n - 1;
    while (i < j)
    {
        if (v.at(i) == 0)
            i++;
        if (v.at(j) == 1)
            j--;
        if (i > j)
            break;
        if (v.at(i) > v.at(j))
        {
            swap(&v.at(i), &v.at(j));
            i++;
            j--;
        }
    }
    cout << "sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
}