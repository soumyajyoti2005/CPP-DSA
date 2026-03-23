#include<iostream>
#include<vector>
#include<queue>
#include<unordered_set>
using namespace std;

void bfs(vector<vector<int>>& grid,vector<vector<bool>>& visited,bool dr=true){

    queue<pair<int,int>> q;
    if(dr){
        q.push({0,0});
        for(int i=1;i<grid.size();i++){
            q.push({0,i});
            q.push({i,0});
        }
    }
    else{
        q.push({grid.size()-1,grid[0].size()-1});
        for(int i=0;i<=grid.size()-2;i++){
            q.push({i,grid[0].size()-1});
        }
        for(int i=0;i<=grid[0].size()-2;i++){
            q.push({grid.size()-1,i});
        }
    }
    
    while(q.size()>0){
        int r=q.front().first;
        int c=q.front().second;
      
        //down
        
            if(r+1<=grid.size()-1 && grid[r+1][c] >= grid[r][c] && !(visited[r+1][c])){
                q.push({r+1,c});
                visited[r+1][c]=true;
            }
        
        //right
        
            if(c+1<=grid[0].size()-1 && grid[r][c+1] >= grid[r][c] && !(visited[r][c+1])){
                q.push({r,c+1});
                visited[r][c+1]=true;
            }
        
    
    
        //top
        
            if(r-1>=0  && grid[r-1][c] >= grid[r][c] && !(visited[r-1][c])){
                q.push({r-1,c});
                visited[r-1][c]=true;
            }
        
        //left
        
            if(c-1>=0 && grid[r][c-1] >= grid[r][c] && !(visited[r][c-1])){
                q.push({r,c-1});
                visited[r][c-1]=true;
            }
        
    
       q.pop();
    }
}


int main(){
    vector<vector<int>> grid={
        {1,2,2,3,5},
        {3,2,3,4,4},
        {2,4,5,3,1},
        {6,7,1,4,5},
        {5,1,1,2,4}
    };
    vector<vector<bool>> visited_p(grid.size(),vector<bool>(grid[0].size(),false));
    vector<vector<bool>> visited_a(grid.size(),vector<bool>(grid[0].size(),false));

    visited_p[0][0]=true;
    for(int i=1;i<grid.size();i++){
        visited_p[0][i]=true;
        visited_p[i][0]=true;
    }

    bfs(grid,visited_p);

    for(int i=0;i<visited_p.size();i++){
        for(int j=0;j<visited_p[0].size();j++){ 
            cout<<visited_p[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    visited_a[grid.size()-1][grid[0].size()-1]=true;
    for(int i=0;i<=grid.size()-2;i++){
        visited_a[i][grid[0].size()-1]=true;
    }
    for(int i=0;i<=grid[0].size()-2;i++){
        visited_a[grid.size()-1][i]=true;
    }

    bfs(grid,visited_a,false);

    for(int i=0;i<visited_a.size();i++){
        for(int j=0;j<visited_a[0].size();j++){ 
            cout<<visited_a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    vector<vector<int>> ans;
    
    for(int i=0;i<visited_a.size();i++){
        for(int j=0;j<visited_a[0].size();j++){ 
            if(visited_a[i][j] && visited_p[i][j]){
                ans.push_back({i,j});
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1];
        cout<<endl;
    }

    
}

// 1 1 1 1 1 
// 1 1 1 1 1 
// 1 1 1 0 0 
// 1 1 0 0 0 
// 1 0 0 0 0 

// {1,2,2,3,5},
// {3,2,3,4,4},
// {2,4,5,3,1},
// {6,7,1,4,5},
// {5,1,1,2,4}