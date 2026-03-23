// this method is using extra vector space ;
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = 9;
    int k = 3;
    int s = 0;
    vector<int> window_sum(n - k + 1, 0);
    for (int i = 0; i <= k - 1; i++)
    {
        s += a[i];
    }
    window_sum[0] = s;
    for (int i = 1; i <= n - k; i++)
    {
        window_sum[i] = window_sum[i - 1] - a[i - 1] + a[k + i - 1];
    }
    int max_sum = 0;
    for (int i = 1; i <= n - k; i++)
    {
        if (window_sum[i] > max_sum)
            max_sum = window_sum[i];
    }
    cout << max_sum;
}