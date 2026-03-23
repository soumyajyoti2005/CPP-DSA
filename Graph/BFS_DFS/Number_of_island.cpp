#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;


void dfs(int i,int j,vector<vector<int>>& grid,vector<vector<bool>>& visited){
   if(i>=grid.size() || i<0 || j>=grid[0].size() || j<0 ) return;
   if(visited[i][j]) return;
   visited[i][j]=true;
   if(grid[i][j]==0) return;


   dfs(i+1,j,grid,visited);
   dfs(i-1,j,grid,visited);
   dfs(i,j+1,grid,visited);
   dfs(i,j-1,grid,visited);
   

}

int main(){
    vector<vector<int>> grid={
        {0,0,0,1,0},
        {0,0,0,1,0},
        {0,0,1,0,0},
        {1,0,0,1,1}
    };
    vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
    
    int islands=0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(visited[i][j] || !(grid[i][j])) continue;
            islands++;
            dfs(i,j,grid,visited);
        }
    }
    
    cout<<islands;
}