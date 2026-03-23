#include <iostream>
using namespace std;
int main()
{
    int time[] = {1, 1000000000, 1000000000, 1000000000};
    int totaltrips = 1000000;
    long long n = 4;
    long long lo = 1, hi = time[0];
    for (long long i = 1; i < n; i++)
    {
        if ((long long)time[i] < hi)
            hi = (long long)time[i];
    }
    hi = hi * (long long)totaltrips;
    long long min_time = hi;
    long long trips_count;
    long long mid;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        trips_count = 0;
        for (long long i = 0; i < n; i++)
        {
            long long x = mid / (long long)time[i];
            trips_count += x;
        }
        if (trips_count >= (long long)totaltrips)
        {
            hi = mid - 1;
            if (mid < min_time)
                min_time = mid;
        }
        else
            lo = mid + 1;
    }
    cout << min_time;
}