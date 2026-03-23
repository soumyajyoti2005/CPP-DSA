#include <iostream>
using namespace std;
int max_elm(int *a, int n, int max)
{
    if (n == -1)
        return max;
    if (a[n] > max)
        max = a[n];
    max_elm(a, n - 1, max);
}
int main()
{
    int arr[5] = {1, 2, 6, 8, 5};
    int max = arr[0];
    cout << max_elm(arr, 4, arr[0]);
}