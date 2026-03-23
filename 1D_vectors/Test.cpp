// not right to all cases have to check again....
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
        if (v[j] > v[j - 1])
            j--;
        if (v[i] < v[i + 1])
            i++;
        // if (i > j)
        //     break;
        if (v[i] > v[j])
        {
            swap(&v[i], &v[j]);
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