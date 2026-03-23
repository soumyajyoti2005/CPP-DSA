#include <iostream>
#include <vector>
#include <unordered_map>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums;
    int k=2;
    for (int i = 0; i < 6; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    unordered_map<int, int> map1;
    vector<int> ans;

    for(int i=0;i<nums.size();i++){
        if(map1.find(nums[i])!=map1.end()){
            map1[nums[i]]++;
        }
        else{
            map1[nums[i]]=1;
        }
    }
    
    vector<pair<int,int>> freq;
    for(auto x: map1){
        freq.push_back({x.second,x.first});
    }
    sort(freq.rbegin(),freq.rend());

    for(int i=0;i<=k-1;i++){
        ans.push_back(freq[i].second);
    }
    
    for(int x: ans){
        cout<<x<<" ";
    }

    
}