#include <iostream>
#include<climits>
#include <vector>
using namespace std;

int fbu(vector<int>& coins,int x,vector<int>& dp)
{
    if(x==0) return 0;

    int y=INT_MAX;
    if(dp[x]!=-2) return dp[x];
   
    for(int i=0;i<coins.size();i++){
      if(coins[i]<=x){
         int a=fbu(coins,x-coins[i],dp);
         y=min(y,a);
      }
    }
    if(y==INT_MAX) return dp[x]=INT_MAX;
    return dp[x]=y+1;
    
}


int main(){

    int x=11;
    vector<int> dp(x+1,-2);
    vector<int> coins;
    // coins.push_back(1);
    coins.push_back(2);
    // coins.push_back(5);
    int ans=fbu(coins,x,dp);

    if(ans==INT_MAX) cout<<-1;
    else cout<<ans;

}



