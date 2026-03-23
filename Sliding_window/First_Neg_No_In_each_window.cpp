#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nums[] = {2, -3, 4, 4, -7, -1, 4, -2, 6};
    int n = 9;
    int k = 3;
    vector<int> ans;
    int idx;
    for (int i = 0; i <= k - 1; i++)
    {
        if (nums[i] < 0)
        {
            idx = i;
            ans.push_back(nums[idx]);
            break;
        }
    }
    int i = 1;
    int j = k;
    while (j <= n - 1)
    {
        if (idx >= i)
            ans.push_back(nums[idx]);
        else
        {
            for (int idx = i; idx <= j; idx++)
            {
                if (nums[idx] < 0)
                {
                    ans.push_back(nums[idx]);
                    break;
                }
            }
        }
        i++;
        j++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}