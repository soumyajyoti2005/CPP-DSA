#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
        {
            res[k++] = a[i++];
        }
        if (a[i] > b[j])
        {
            res[k++] = b[j++];
        }
    }
    if (i == a.size())
    {
        while (j < b.size())
        {
            res[k++] = b[j++];
        }
    }
    if (j == b.size())
    {
        while (i < a.size())
        {
            res[k++] = a[i++];
        }
    }
}
void merge_sort(vector<int> &v)
{
    int n = v.size();
    if (n == 1)
        return;
    int n1 = n / 2;
    int n2;
    if (n % 2 != 0)
        n2 = (n / 2) + 1;
    else
        n2 = n1;
    vector<int> a(n1);
    vector<int> b(n2);
    for (int i = 0; i < n1; i++)
    {
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = v[i + n1];
    }
    merge_sort(a);
    merge_sort(b); 
    // merging two array
    merge(a, b, v);
    // a.clear();
    // b.clear();
}
int main()
{
    int arr[] = {7, 6, 5, 5, 3, 2, 1};
    int n = 7;
    vector<int> a(arr, arr + n);
    merge_sort(a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}