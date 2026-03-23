#include <iostream>
#include<climits>
#include <vector>
using namespace std;

int color(vector<int>& arr,int i,int j ){
    
    int col=0;
    for(int idx=i;idx<=j;idx++){
        col=(col+arr[idx])%100;
    }
    return col;
}

int min_smoke(vector<int>& arr,int i,int j, vector<vector<int>>& dp)
{
    if(i==j) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    int res=INT_MAX;
    for(int k=i;k<j;k++){
          res=min(res,min_smoke(arr,i,k,dp)+min_smoke(arr,k+1,j,dp)+color(arr,i,k)*color(arr,k+1,j));
    } 
    return dp[i][j]=res;
}


int main(){
     
    vector<int> v(4,0);
    v[0]=18;
    v[1]=19;
    // v[2]=2;
    // v[3]=3;
    // v[4]=1;

    vector<vector<int>> dp(20,vector<int> (20,-1));
    cout<<min_smoke(v,0,v.size()-1,dp);
    
}



