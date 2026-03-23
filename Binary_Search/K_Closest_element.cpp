#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int i = 0, j = n - 1;
    int mid;
    int count = 0;
    int target = 3;
    int obs, idx;
    int k = 4;
    if (k == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else if (target < arr[0])
    {
        for (int i = 0; i < k; i++)
        {
            v.push_back(arr[i]);
        }
    }
    else if (target > arr[n - 1])
    {
        for (int i = n - k; i <= n - 1; i++)
        {
            v.push_back(arr[i]);
        }
    }
    else
    {
        while (i <= j)
        {
            mid = (i + j) / 2;
            if (arr[mid] == target)
            {
                count++;
                obs = arr[mid];
                v.push_back(obs);
                idx = mid;
                break;
            }
            else if (arr[mid] > target)
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        if (count == 0)
        {
            if ((target - arr[j]) <= (arr[i] - target)) // j-> lower bound i-> upper bound
            {
                idx = j;
                obs = arr[j];
                v.push_back(obs);
            }
            else
            {
                idx = i;
                obs = arr[i];
                v.push_back(obs);
            }
        }
        if (idx >= 1)
            i = idx - 1;
        if (idx <= n - 2)
            j = idx + 1;
        count = 1;
        while (count <= k - 1)
        {
            if (i == -1)
            {
                v.push_back(arr[j]);
                count++;
                j++;
            }
            else if (j == n)
            {
                v.push_back(arr[i]);
                count++;
                i--;
            }
            else if ((target - arr[i]) <= (arr[j] - target))
            {
                v.push_back(arr[i]);
                count++;
                if (i >= 0)
                    i--;
            }
            else
            {
                v.push_back(arr[j]);
                count++;
                if (j <= n - 1)
                    j++;
            }
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}