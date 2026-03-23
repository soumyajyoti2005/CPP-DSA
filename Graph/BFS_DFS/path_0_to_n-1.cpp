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

void path(int i,string s,unordered_set<int>& is_visited,int v){
    if(i==v-1){
        cout<<s+to_string(i)<<endl;
        return;
    }
     
    s+=to_string(i) + " ";
    for(auto ele: graph[i]){
        if(is_visited.find(ele)!=is_visited.end()) continue;
        is_visited.insert(ele);
        path(ele,s,is_visited,v);
        is_visited.erase(ele);
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

    unordered_set<int> is_visited;
    is_visited.insert(0);
    path(0,"",is_visited,v);
    
    
}