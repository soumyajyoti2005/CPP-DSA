#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nums[] = {2, 3, 1, 2, 4, 3};
    int target = 8;
    int n = 6;
    int lo = 0;
    int hi = n - 1;
    int mid;
    int ans = 0;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        int sum = 0;
        for (int i = 0; i <= mid - 1; i++)
        {
            sum += nums[i];
        }
        int max_sum = sum;
        for (int i = 1; i <= n - mid; i++)
        {
            sum = sum - nums[i - 1] + nums[i + mid - 1];
            if (sum > max_sum)
                max_sum = sum;
        }
        if (max_sum >= target)
        {
            hi = mid - 1;
            ans = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << ans;
}