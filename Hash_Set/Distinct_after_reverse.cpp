#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int reverse(int n)
{

    int s = 0;
    int r;
    while (n)
    {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }
    return s;
}

int main()
{
    vector<int> nums;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    unordered_set<int> set;
    for (int i = 0; i < nums.size(); i++)
    {
        set.insert(nums[i]);
        set.insert(reverse(nums[i]));
    }

    cout << set.size();
}