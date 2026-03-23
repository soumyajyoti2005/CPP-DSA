#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // first given vector have to sort
    int satisfaction[] = {-9, -8, -1, 0, 5};
    int n = 5;
    vector<int> suffix_sum(n, 0);
    suffix_sum[n - 1] = satisfaction[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix_sum[i] = suffix_sum[i + 1] + satisfaction[i];
    }
    int k = 1;
    int time_coefficent = 0;
    for (int i = 0; i < n; i++)
    {
        if (suffix_sum[i] >= 0)
        {
            time_coefficent += (satisfaction[i] * k);
            k++;
        }
    }
    cout << time_coefficent;
}