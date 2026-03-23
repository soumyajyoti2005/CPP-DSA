#include<iostream>
#include<vector>
using namespace std;

int find(int x,vector<int>& parent){
    if(parent[x]==x) return x;

    return parent[x]=find(parent[x],parent);
}

void Union(int a,int b,vector<int>& parent,vector<int>& rank){
      
    int x=find(a,parent);
    int y=find(b,parent);

    if(rank[x]>=rank[y]){
        parent[y]=x;
        rank[x]++;
    }
    else{
        parent[x]=y;
        rank[y]++;
    }

}

int main(){
    int n;
    cin>>n;
    vector<int> parent(n+1);
    vector<int> rank(n+1,1);

    for(int i=0;i<=n;i++){
        parent[i]=i;
    }

    int m;

    while(m--){
        string str;
        cin>>str;
        if(str=="union"){
            int a,b;
            cin>>a>>b;
            Union(a,b,parent,rank);
        }
        else if(str=="find"){
           int a;
           cin>>a;
           cout<<find(a,parent);
        }
    }

    
}