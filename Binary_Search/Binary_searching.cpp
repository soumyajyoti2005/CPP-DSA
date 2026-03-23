#include <iostream>
using namespace std;
int bin_search(int a[], int n, int target)
{
    int i = 0;
    int j = n - 1;
    int mid;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        if (a[mid] < target)
            i = mid + 1;
        if (a[mid] > target)
            j = mid - 1;
    }
    return -1;
}
int main()
{
    int n = 10;
    int a[n] = {1, 2, 4, 5, 9, 15, 18, 21, 23, 25};
    int target = 20;
    int x = bin_search(a, n, target);
    if (x == -1)
        cout << "not present";
    else
        cout << target << " present on " << x << " index";
}