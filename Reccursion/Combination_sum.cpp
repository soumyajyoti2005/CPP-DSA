#include <iostream>
#include <vector>
using namespace std;
void comb_sum(vector<int> v, vector<int> &nums, int target, int idx)
{
    if (target == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        cout << endl;
        return;
    }
    if (target < 0)
    {
        return;
    }
    for (int i = idx; i < nums.size(); i++)
    {
        v.push_back(nums[i]);
        comb_sum(v, nums, target - nums[i], i);
        v.pop_back();
    }
}
int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(5);
    vector<int> ans;
    int target = 8;
    comb_sum(ans, nums, target, 0);
}