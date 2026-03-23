#include <iostream>
#include <climits>
#include <vector>
using namespace std;

float f(int i, int h, int t, int x, vector<float> &p,vector<vector<vector<float>>> &dp)
{
    if (i == p.size())
        return 1;

    if(dp[i][h][t]!=-1) return dp[i][h][t];
    float head = 0;
    head =p[i]*f(i + 1, h + 1, t, x, p,dp);
    float tail = 0;
    if (t + 1 <= x)
        tail =(1-p[i])* f(i + 1, h, t + 1, x, p,dp);

    return dp[i][h][t]= head + tail;

}

int main()
{

    vector<float> p;
    // p.push_back(0.42);
    // p.push_back(0.01);   
    // p.push_back(0.42); 
    // p.push_back(0.99);   //0.42 0.01 0.42 0.99 0.42
    // p.push_back(0.42);   // 0.30 0.60 0.80

    p.push_back(0.30);
    p.push_back(0.60);   
    p.push_back(0.80);

    // p.push_back(0.50);
    
    int n=p.size();
    int x=n/2;
    vector<vector<vector<float>>> dp(n + 1, vector<vector<float>>(n + 1, vector<float>(n + 1, -1.0)));
    cout<<f(0,0,0,x,p,dp);

}
