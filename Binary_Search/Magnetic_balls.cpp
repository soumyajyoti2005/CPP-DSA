#include <iostream>
using namespace std;
int main()
{
    int position[] = {1, 2, 3, 4, 5, 1000000000};
    int m = 2;
    int n = 6;
    // have to sort;
    int lo = 1;
    int hi = position[n - 1] - position[0];
    int mid;
    int force = 0;
    while (lo <= hi)
    {
        int count_balls = 1;
        mid = (lo + hi) / 2;
        int constmid = mid;
        int last = position[0];
        for (int i = 1; i < n; i++)
        {
            if (position[i] - last >= mid)
            {
                count_balls++;
                last = position[i];
            }
            if (count_balls == m)
                break;
        }
        if (count_balls < m)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
            if (mid > force)
                force = mid;
        }
    }
    cout << force;
}