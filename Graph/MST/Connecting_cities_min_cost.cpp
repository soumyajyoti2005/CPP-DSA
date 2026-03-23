#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class DSU{
    public:

    vector<int> parent;
    vector<int> rank;

    DSU(int n){
       parent.resize(n+1);
       rank.resize(n+1,1);

       for(int i=0;i<=n;i++){
        parent[i]=i;
    }
    }

    int find(int x){
    if(parent[x]==x) return x;
    return parent[x]=find(parent[x]);
    }

    void Union(int a,int b){
      
    int x=find(a);
    int y=find(b);

    if(x == y) return;
    
    if(rank[x]>=rank[y]){
        parent[y]=x;
        rank[x]++;
    }
    else{
        parent[x]=y;
        rank[y]++;
    }

}
};

bool cmp(vector<int>& a,vector<int>& b){
    return a[2]<b[2];
}

bool iscycle(int a,int b,DSU& ds){

    int x=ds.find(a);
    int y=ds.find(b);

    if(x==y) return true;

    ds.Union(a,b);
    return false;
    
}

int main(){
    int n;
    cout<<"enter no of vertices: ";
    cin>>n;
    DSU ds=DSU(n);
    
    int m;
    cout<<"enter no of edges: ";
    cin>>m;

    vector<vector<int>> edges(m,vector<int>(3,0));
    int a,b,w;

    for(int i=0;i<m;i++){
           cin>>a>>b>>w;
           edges[i][0]=a;
           edges[i][1]=b;
           edges[i][2]=w;
        
    }

    sort(edges.begin(),edges.end(),cmp);

    
    int ans=0;
    for(int i=0;i<edges.size();i++){
        if(!(iscycle(edges[i][0],edges[i][1],ds))) ans+=edges[i][2];
    }
    
    cout<<ans;
}

// 0 1 3
// 0 3 2
// 3 2 1
// 1 2 4
// 1 4 2
// 4 5 5
// 5 6 3
// 4 6 1