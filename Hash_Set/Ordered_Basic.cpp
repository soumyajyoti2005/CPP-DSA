#include<iostream>
#include<set>
#include<map>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);

    for(auto x : s){
        cout<<x<<" ";
    }
}