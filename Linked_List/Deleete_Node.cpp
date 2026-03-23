// access of head address not given
#include <iostream>
using namespace std;
class Listnode
{
public:
    int val;
    Listnode *next;

    Listnode(int x)
    {
        val = x;
        next = NULL;
    }
};

int main()
{
    Listnode *a = new Listnode(3);
    Listnode *b = new Listnode(4);
    Listnode *c = new Listnode(5);
    Listnode *d = new Listnode(6);
    a->next = b;
    b->next = c;
    c->next = d;
    Listnode *target = c;

    Listnode *tar = target;
    Listnode *prev = tar;
    while (tar->next != NULL)
    {
        tar->val = (tar->next)->val;
        prev = tar;
        tar = tar->next;
    }
    prev->next = NULL;
    
    // for traversing
    Listnode *temp = a;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}