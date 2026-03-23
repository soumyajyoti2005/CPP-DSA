#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<int,int>& p1,pair<int,int>& p2){
    double r1=(p1.first*1.0)/(p1.second*1.0);
    double r2=(p2.first*1.0)/(p2.second*1.0);
    return r1>r2;
}

double fractional_knapsack(vector<int>& prof,vector<int>& weights,int w){
    vector<pair<int,int>> arr;
    pair<int,int> p;
    for(int i=0;i<weights.size();i++){
        p.first=prof[i];
        p.second=weights[i];
        arr.push_back(p);
    }

    sort(arr.begin(),arr.end(),cmp);
    
    double profit=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i].second<=w){ 
            profit+=arr[i].first;
            w-=arr[i].second;
        }
        else {
            profit+=((arr[i].first*1.0)*w)/(arr[i].second*1.0);
            w=0;
            break;
        }
    }
    
    return profit;
}

int main(){
    
    int n;
    cin>>n;

    vector<int> profit(n);
    vector<int> wieght(n);

    for(int i=0;i<n;i++){
      cin>>profit[i];
    }
    for(int i=0;i<n;i++){
      cin>>wieght[i];
    }

    int w;
    cin>>w;
    cout<<fractional_knapsack(profit,wieght,w);
}