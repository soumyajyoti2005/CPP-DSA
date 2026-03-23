#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;

void add_edge(int src,int dst,bool dir){
    graph[src].push_back(dst);
    if(!(dir)) graph[dst].push_back(src);
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto ele:graph[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
void dfs(int i,unordered_set<int>& visited){
   if(visited.count(i)) return;

   cout<<i<<" ";
   visited.insert(i);
   for(auto ele: graph[i]){
      dfs(ele,visited);
   }
}

int main(){
    int v;
    cout<<"enter no of vertices: ";
    cin>>v;
    graph.resize(v);

    int e;
    cout<<"enter no of edges: ";
    cin>>e;
    int src,dst;
    bool dir=false;
    cout<<"enter 1 if directed or 0: ";
    cin>>dir;

    cout<<"enter all source and destination of each edges: ";
    while(e--){
        cin>>src>>dst;
        add_edge(src,dst,dir);
    }
    display();

    unordered_set<int> visited;

    int component=0;
    for(int i=0;i<graph.size();i++){
        if(visited.count(i)) continue;
        else component++;
        dfs(i,visited);
    }
    cout<<endl<<component;
    
    
    
}