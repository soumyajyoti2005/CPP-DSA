#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr;
    for (int i = 1; i <= 5; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    unordered_map<int, int> map;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for (auto i : arr)
    {
        if (map.find(i) != map.end())
        {
            map[i]++;
        }
        else
        {
            map[i] = 1;
        }
    }

    vector<int> ans;
    int x;
    for (int i = 100; i <= 999; i++)
    {
        count1 = 0;
        count2 = 0;
        count3 = 0;
        x = i;
        int a = x % 10;
        x /= 10;
        int b = x % 10;
        x /= 10;
        int c = x % 10;
        if (map.find(a) != map.end())
        {

            if (map[a] != 0)
            {
                map[a]--;
                count1++;
            }
        }
        if (map.find(b) != map.end())
        {

            if (map[b] != 0)
            {
                map[b]--;
                count2++;
            }
        }
        if (map.find(c) != map.end())
        {

            if (map[c] != 0)
            {
                map[c]--;
                count3++;
            }
        }
        if (count1 == 1)
        {
            map[a]++;
        }
        if (count2 == 1)
        {
           map[b]++;
        }
        if (count3 == 1)
        {
            map[c]++;
        }
        if (count1 == 1 && count2 == 1 && count3 == 1 && (i % 2 == 0))
        {
            ans.push_back(i);
        }
    }

    for (int x : ans)
    {
        cout << x << " ";
    }
}