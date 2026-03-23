#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> m;
    m[3]=2;
    m[1]=6;
    m[4]=3;
    m[2]=5;
    
    for(auto x: m){
        cout<<x.first<<" ";
    }
}