#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq1; //min Heap
    priority_queue<int> pq2;

    pq1.push(1);
    // pq2.push(2);
    // pq1.push(3);

    cout<<pq2.size()<<endl;
    cout<<pq1.size()<<endl;
    if(pq2.size()>pq1.size()){
        cout<<"no error";
    }
    else cout<<"error";

}