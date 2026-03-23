#include <iostream>
#include <vector>
#include <unordered_map>
#include<unordered_set>
using namespace std;

int main()
{
    vector<int> nums;
    for (int i = 0; i < 10; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    unordered_map<int, int> map;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.find(nums[i]) != map.end())
        {
           map[nums[i]]++;
        }
        else
        {
            map[nums[i]] = 1;
        }
    }
    
    unordered_set<int> set;
    for (auto i: map){
       if(set.size()==0 || set.find(i.second)==set.end()){
        set.insert(i.second);
       }
       else{
        count++;
        break;
       }
    }

    

    if(count==0) cout<<true;
    else cout<<false ;
}