#include<iostream>
using namespace std;
int main(){
    int n=2;
    int maxweight=15;
    int w=3;

    for(int i=n*n;i>=1;i--){
        if((i*w)<=maxweight){
            cout<<i;
            break;
        }
    }
}