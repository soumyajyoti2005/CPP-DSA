#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums;
    int target = 9;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    unordered_map<int, int> map;
    vector<int> ans;
    map[nums[0]] = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        int tar = target - nums[i];

        if (map.find(tar) != map.end())
        {
            ans.push_back(i);
            ans.push_back(map[tar]);
            break;
        }
        else
        {
            map[nums[i]] = i;
        }
    }
    cout << ans[0] << " " << ans[1];
}