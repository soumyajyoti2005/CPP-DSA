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

void topological_sort(vector<int>& indegree){
    
    queue<int> q;
    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0) q.push(i);
    }

    while(q.size()>0){
        
        int i=q.front();
        cout<<i<<" ";
        for(auto x:graph[i]){
            indegree[x]--;
            if(indegree[x]==0) q.push(x);
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

    vector<int> indegree(v,0);
    cout<<"enter all source and destination of each edges: ";
    while(e--){
        cin>>src>>dst;
        add_edge(src,dst,dir);
        indegree[dst]++;
    }
    display();
    cout<<endl;
    for(auto x:indegree){
        cout<<x<<" ";
    }
    cout<<endl;
    topological_sort(indegree);

    
    
}

// 0 2
// 1 2
// 1 3
// 2 3
// 2 4
// 2 5
// 2 6
// 3 5
// 4 6
// 5 6
// 6 7