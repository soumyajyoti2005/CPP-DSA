#include <iostream>
#include<climits>
#include <vector>
using namespace std;

int max_score(vector<vector<int>>& act,int n,int idx,vector<vector<int>>& dp)
{
    if(n==act.size()){
        return 0;
    }
    
    if(idx!=-1 && dp[n][idx]!=-1) return dp[n][idx];
    int res=INT_MIN;
    for(int i=0;i<3;i++){
        if(i!=idx){
            res= max(res,act[n][i]+max_score(act,n+1,i,dp));
        }
    }
    return dp[n][idx]=res;
}


int main(){
     
    vector<vector<int>> activity;
    vector<int> v(3,0);
    v[0]=10;
    v[1]=40;
    v[2]=70;
    activity.push_back(v);
    v[0]=20;
    v[1]=50;
    v[2]=80;
    activity.push_back(v);
    v[0]=30;
    v[1]=60;
    v[2]=90;
    activity.push_back(v);

    // v[0]=30;
    // v[1]=60;
    // v[2]=90;
    // activity.push_back(v);

    vector<vector<int>> dp(activity.size(),vector<int> (3,-1));
    cout<<max_score(activity,0,-1,dp);

    
}



