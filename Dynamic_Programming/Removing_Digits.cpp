#include <iostream>
#include<climits>
#include <vector>
using namespace std;

int fbu(int n,vector<int>& dp)
{
    if(n==0) return 0;
    if(n%10==n) return 1;

    string s=to_string(n);
    
    int y=INT_MAX;

    if(dp[n]==-1){
    for(int i=0;i<s.length();i++){
      if(s[i]!='0'){
         int x=fbu(n-(s[i]-'0'),dp);
         y=min(y,x);
      }
    }
    dp[n]= 1+y;
    return dp[n];
}
else{
    return dp[n];
}

}

int main(){
    int n;
    cin>>n;

    vector<int> dp(n+1,-1);
    cout<<fbu(n,dp);

}



