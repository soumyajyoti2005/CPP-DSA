#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
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

void bfs(){

    queue<int> q;
    unordered_set<int> visited;

    q.push(0);
    visited.insert(0);
    while(q.size()>0){
       int i=q.front();
       cout<<i<<" ";
       for(auto ele:graph[i]){
          if(visited.count(ele)==1) continue;
          visited.insert(ele);
          q.push(ele);
       }
       q.pop();
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
    cout<<endl;
    bfs();
    
}