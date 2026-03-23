#include<iostream>
#include<vector>
#include<list>
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

int main(){
    int v;
    cin>>v;
    graph.resize(v);

    int e;
    cin>>e;
    int src,dst;
    bool dir=false;
    cin>>dir;

    while(e--){
        cin>>src>>dst;
        add_edge(src,dst,dir);
    }
    display();
    
    
}