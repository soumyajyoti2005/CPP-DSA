#include <iostream>
#include <vector>
using namespace std;

int fbu(int n, vector<int> &dp)
{
    if (n == 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;

    int a = INT16_MAX;
    int b = INT16_MAX;
    int c;

    if (dp[n] == -1)
    {
        c = fbu(n - 1, dp);
        if (n % 2 == 0)
        {
            a = fbu(n / 2, dp);
        }
        if (n % 3 == 0)
        {
            b = fbu(n / 3, dp);
        }

        dp[n] = 1 + min(c, min(a, b));
        return dp[n];
    }

    else
    {
        return dp[n];
    }
}

int main()
{
    vector<int> dp(31, -1);
    cout << fbu(30, dp);
}