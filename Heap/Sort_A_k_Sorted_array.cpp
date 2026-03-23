#include<iostream>
#include<queue>
using namespace std;
int main(){
   int arr[]={6,5,3,2,8,10,9};
   int k=3;
   int n=7;

   vector<int> ans;
   priority_queue<int,vector<int>,greater<int>> pq;
   for(int i=0;i<=k-1;i++){
       pq.push(arr[i]);
   }

   for(int i=k;i<=n-1;i++){
      pq.push(arr[i]);
      ans.push_back(pq.top());
      pq.pop();
   }

   while(pq.size()>0){
    ans.push_back(pq.top());
      pq.pop();
   }
    
   for(int x: ans){
    cout<<x<<" ";
   }
}