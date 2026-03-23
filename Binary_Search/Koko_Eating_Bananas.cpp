#include <iostream>
using namespace std;
int main()
{
    int piles[] = {3, 6, 7, 100, 1, 1, 1, 1, 1};
    int h = 10;
    int n = 9;
    int lo = 1, hi = piles[0]; // lo->min element of array & hi->max element of array
    for (int i = 1; i < n; i++)
    {
        if (piles[i] > hi)
            hi = piles[i];
    }
    int ans = hi;
    int mid;
    int count;
    while (lo <= hi)
    {
        count = 0;
        mid = (lo + hi) / 2;
        for (int i = 0; i < n; i++)
        {
            if (piles[i] <= mid)
                count++;
            else
            {
                int x = piles[i];
                int r = x % mid;
                x /= mid;
                if (r != 0)
                    count += (x + 1);
                if (r == 0)
                    count += x;
            }
        }
        if (count <= h)
        {
            hi = mid - 1;
            if (mid < ans)
                ans = mid;
        }
        else
            lo = mid + 1;
    }
    cout << ans;
}