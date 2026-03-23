#include<iostream>
#include<vector>
#include<stack>
using namespace std;


void next_greater_idx(vector<int> v,vector<int>& ngi){
 int n=v.size();
 ngi[n-1]=n;
 stack<int> st;
 st.push(n-1);

 for(int i=n-2;i>=0;i--){
     while(st.size()>0 && v[st.top()]<v[i]) st.pop();
     if(st.size()>0) ngi[i]=st.top();
     st.push(i);
 }

}


int main(){
    int k=3;
     vector<int> v;
     v.push_back(1);
     v.push_back(3);
     v.push_back(-1);
     v.push_back(-3);
     v.push_back(5);
     v.push_back(3);
     v.push_back(6);
     v.push_back(7);
     

     vector<int> ngi(v.size(),v.size());
     next_greater_idx(v,ngi);
     int n=v.size();
     

     vector<int> ans(n-k+1);
     

     int i=0;
     int j=k-1;
     int idx=0;

     while(j<n){
            if (idx < i) idx = i;           
            while (ngi[idx] <= j) {         
                idx = ngi[idx];
            }
            ans[i] = v[idx];                

            i++;
            j++;
        }

     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
     }


     
}