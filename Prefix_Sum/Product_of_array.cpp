#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nums[] = {1, 2, 3, 4};
    int n = 4;
    vector<int> prefix(n, 0);
    prefix[0] = 1;
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    vector<int> suffix(n, 0);
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(prefix[i] * suffix[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " "; // we have to return ans if we are making any function
    }
}