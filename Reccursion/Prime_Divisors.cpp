#include<iostream>
using namespace std;

void f(int n,int i,int prev,int& count){
    
    if(n==1) return;

    if(n%i==0 && prev!=i){ 
        count++;
        f(n/i,i,i,count);
    }
    else if(n%i==0 && prev==i){ 
        f(n/i,i,i,count);
    }
    else{
        f(n,i+1,prev,count);
    }
}

int f(int n){

    int count=2;
    int prev=1;
    int i=2;
    while(n!=1){
      if(n%i==0 && prev!=i){ 
        count++;
        n=n/i;
        prev=i;
      }
      else if(n%i==0 && prev==i){ 
        n=n/i;
        prev=i;
      }
      else{
        i++;
      }
    }
    return count;
}

int f1(int n){

    int count=1;
    int prev=1;
    int i=2;
    int x=0;
    while(n!=1){
      if(n%i==0 && prev!=i){ 
        count+=count*(x+1);
        n=n/i;
        prev=i;
      }
      else if(n%i==0 && prev==i){ 
        x++;
        n=n/i;
        prev=i;
      }
      else{
        i++;
      }
    }
    return count;

}




int main(){
    int count=2;
    f(120,2,1,count);
    cout<<count<<endl;
    cout<<f(120)<<endl;
    cout<<f1(16);
}