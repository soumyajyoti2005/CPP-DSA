#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
};
int main()
{
    Node a, b, c;
    a.val = 10;
    a.next = &b;
    b.val = 5;
    b.next = &c;
    c.val = 2;
    c.next = NULL;
    cout << ((a.next)->next)->val; //(a.next)==&b; ((a.next)->next)==&b->next==&c; ((a.next)->next)->val==&c->val;
}