#include<iostream>
#include<vector>
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


int main(){
    int n;
    cin>>n;

    DSU d=DSU(n);
    

    int m;
    cin>>m;

    while(m--){
        string str;
        cin>>str;
        if(str=="union"){
            int a,b;
            cin>>a>>b;
            d.Union(a,b);
        }
        else if(str=="find"){
           int a;
           cin>>a;
           cout<<d.find(a);
        }
    }

    for(auto x: d.parent){
        cout<<x<<" ";
    }

    
}