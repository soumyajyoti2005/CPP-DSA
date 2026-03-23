#include<iostream>
#include<vector>
using namespace std;

int  path_count=0;
bool CanWeGo(vector<vector<int>>& maze,int i,int j,int n){
       if(i<0 || i>=n || j<0 || j>=n) return false;

       if(maze[i][j]==2 || maze[i][j]==1) return false;
       return true;

}
void paths(vector<vector<int>>& maze, int i,int j,int n){
   
    if(i==n-1 && j==n-1){
        path_count++;
        return ;
    }
   
   maze[i][j]=2;
   //left
   if(CanWeGo(maze,i,j-1,n)) paths(maze,i,j-1,n);
   //right
   if(CanWeGo(maze,i,j+1,n)) paths(maze,i,j+1,n);
   //up
   if(CanWeGo(maze,i+1,j,n)) paths(maze,i+1,j,n);
   //bottom
   if(CanWeGo(maze,i-1,j,n)) paths(maze,i-1,j,n);
 
   maze[i][j]=0;

}

int main(){

    vector<vector<int>> maze={
        {0,0,1,0,0,1,0},
        {1,0,1,1,0,0,0},
        {0,0,0,0,1,0,1},
        {1,0,1,0,0,0,0},
        {1,0,1,1,0,1,0},
        {1,0,0,0,0,1,0},
        {1,1,1,1,0,0,0}
    };

    paths(maze,0,0,7);
    cout<<path_count;
}