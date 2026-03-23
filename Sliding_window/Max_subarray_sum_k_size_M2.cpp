#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = 9;
    int k = 3;
    int sum = 0;
    for (int i = 0; i <= k - 1; i++)
    {
        sum += a[i];
    }
    int max_sum = sum;
    int idx;
    for (int i = 1; i <= n - k; i++)
    {
        sum = sum - a[i - 1] + a[k + i - 1];
        if (sum > max_sum)
        {
            max_sum = sum;
            idx = i;
        }
    }

    cout << max_sum << endl
         << idx;
}