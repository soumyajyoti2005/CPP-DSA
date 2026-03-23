#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int reverse(int n)
{
    int s = 0;
    while (n)
    {
        int r = n % 10;
        n /= 10;
        s = s * 10 + r;
    }
    return s;
}

int sum(int n){
    int s=0;
    for(int i=0;i<=n;i++){
       s+=i;
    }
    return s;
}

int main()
{
    vector<int> nums;
    for (int i = 1; i <= 4; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    // modify vector by substracting it's reverse number of each index
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = nums[i] - reverse(nums[i]);
    }


    // store value and it's frequency of every modified value of vector in the map 
    unordered_map<int, int> map;
    for (auto i : nums)
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

    //calculate no of pairs from frequency of pair
    int pairs=0;
    for(auto i: map){
       pairs=pairs+sum(i.second -1);
    }
    cout<<pairs;
}