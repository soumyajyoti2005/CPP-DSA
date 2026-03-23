#include <iostream>
#include<climits>
#include <vector>
using namespace std;

int min_score(vector<int>& arr,int i,int j, vector<vector<int>>& dp)
{
    if(i+1==j) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    int res=INT_MAX;
    for(int k=i+1;k<j;k++){
          res=min(res,min_score(arr,i,k,dp)+min_score(arr,k,j,dp)+arr[i]*arr[j]*arr[k]);
    }
    return dp[i][j]=res;
}


int main(){
     
    vector<int> v(5,0);
    v[0]=4;
    v[1]=2;
    v[2]=3;
    v[3]=2;
    v[4]=1;

    vector<vector<int>> dp(20,vector<int> (20,-1));
    cout<<min_score(v,0,v.size()-1,dp);
    
}



