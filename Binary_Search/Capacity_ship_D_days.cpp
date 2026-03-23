#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 1, 1};
    int n = 5;
    int d = 4;
    int hi = arr[0], lo = arr[0]; // hi->sum of array; lo ->max element of the array;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > lo)
            lo = arr[i];
        hi += arr[i];
    }
    int i;
    int mid, constmid;
    int count;
    while (lo <= hi)
    {
        i = 0;
        count = 0;
        mid = (lo + hi) / 2;
        constmid = mid;
        while (i <= n - 1)
        {
            if (mid >= arr[i])
            {
                mid = mid - arr[i];
                i++;
            }
            if (mid < arr[i] || i == n - 1)
            {
                count++;
                mid = constmid;
            }
        }
        count--;
        if (count == d)
        {
            cout << constmid;
            break;
        }
        if (count > d)
            lo = constmid + 1;
        if (count < d)
            hi = constmid + 1;
    }
}