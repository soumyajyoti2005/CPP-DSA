// Most bekar Method.....
// can solve any unsorted array not only for 0 and 1;
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
    int n, x, n1, n2, t;
    cout << "enter no of elements in vector: ";
    cin >> n;
    cout << "enter elements in vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++) // i=passes
    {
        for (int j = i + 1; j <= n - 1; j++) // j=steps
        {
            if (v.at(i) > v.at(j))
            {
                swap(&v[i], &v[j]);
            }
        }
    }
    cout << "the sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
}