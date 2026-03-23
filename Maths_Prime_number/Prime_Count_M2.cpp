#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int n = 500;
    vector<int> ans(n + 1, 1);
    ans[0] = 0;
    ans[1] = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (ans[i] == 1)
        {
            int j = i + i;
            while (j <= n)
            {
                // if (j % i == 0)
                ans[j] = 0;
                j = j + i;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] == 1)
            cout << i << " ";
    }
    // cout << count;
}