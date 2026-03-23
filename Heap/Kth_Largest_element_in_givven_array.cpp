#include <iostream>
#include <queue>
using namespace std;

int main()
{
    vector<int> nums;
    int k = 2;
    for (int i = 0; i < 6; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int n = nums.size();
    priority_queue<int> pq;

    for (int i = 0; i < n; i++)
    {
        pq.push(nums[i]);
    }
    for (int i = 1; i <= k - 1; i++)
    {
        pq.pop();
    }
    cout << pq.top();
}