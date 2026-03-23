#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;  // by default max heap
    pq.push(10);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    cout << pq.top();
    cout << pq.size();
}