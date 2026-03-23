#include <iostream>
#include<climits>
#include <vector>
using namespace std;

int fbu(int n,vector<int> &dp)
{
    if(n==0){ 
        return 1;
    }
    
    if(dp[n]!=-1) return dp[n];

    int sum=0;
    for(int i=1;i<=6;i++){
        if(i<=n){
            sum+=fbu(n-i,dp);
        }
        else break;
    }
    return dp[n]=sum;
    
}


int main(){

    int n;
    cin>>n;
    vector<int> dp(n+1,-1);

    cout<<fbu(n,dp);
    

}



