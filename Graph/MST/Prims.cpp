#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<list>
#define pp pair<int,int>
using namespace std;

vector<list<pair<int,int>>> graph;

void add_edge(int src,int dst,int wt,bool dir){
    graph[src].push_back({dst,wt});
    if(!(dir)) graph[dst].push_back({src,wt});
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto ele:graph[i]){
            cout<<ele.first <<"->"<<ele.second<<" ";
        }
        cout<<endl;
    }
}

int main(){
   vector<vector<int>> edges={
    {0,1,4},
    {0,4,1},
    {0,7,3},
    {2,4,1},
    {2,3,4},
    {4,8,2},
    {7,8,1},
    {4,5,4},
    {5,8,3},
    {5,6,3},
    {6,3,2},
    {1,2,1}
   };

   graph.resize(9);

   int e=edges.size();
   int i=0;
   while(e--){
    add_edge(edges[i][0],edges[i][1],edges[i][2],false);
    i++;
   }

   unordered_map<int,int> map; //<node,disc wt>
   unordered_set<int> visited;
   vector<int>par(9);
   priority_queue<pp,vector<pp>,greater<pp> > pq; //<wt,vertex>

   map[0]=0;
   for(int i=1;i<9;i++){
    map[i]=INT32_MAX;
   }

   int ans=0;
   pq.push({0,0});

   while(!pq.empty()){
    pp curr = pq.top();
    pq.pop();

    int u = curr.second;
    int wt = curr.first;

    if(visited.count(u)) continue;

    visited.insert(u);
    ans += wt;

    for(auto ele : graph[u]){
        int v = ele.first;
        int w = ele.second;

        if(!visited.count(v) && map[v] > w){
            map[v] = w;
            par[v] = u;
            pq.push({w, v});
        }
    }
}


   cout<<ans;
      


}