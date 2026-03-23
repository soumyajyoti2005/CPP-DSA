#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;
void permutation(vector<int>& original,int idx,vector<vector<int>>& ans)
{
    if(idx==original.size()-1){
        ans.push_back(original);
        return;
    }
    unordered_set<char> set;
    for (int i =idx; i < original.size(); i++)
    {
        if(set.find(original[i])!=set.end()) continue;

        set.insert(original[i]);
        swap(original[i],original[idx]);
        permutation(original,idx+1,ans);
        swap(original[i],original[idx]);
    }
}
int main()
{
    vector<vector<int>> ans;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);

    permutation(v,0,ans);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
   
}