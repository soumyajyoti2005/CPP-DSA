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
    Listnode *e = new Listnode(7);
    Listnode *f = new Listnode(8);
    Listnode *g = new Listnode(9);
    Listnode *h = new Listnode(10);
    Listnode *i = new Listnode(11);
    // 1st head a
    a->next = b;
    b->next = c;
    c->next = f;
    // intersetin node f;
    f->next = g;
    g->next = h;
    h->next = i;
    // 2nd head d
    d->next = e;
    e->next = f;

    Listnode *temp1 = a;
    int lenA = 0;
    while (temp1 != NULL)
    {
        lenA++;
        temp1 = temp1->next;
    }

    Listnode *temp2 = d;
    int lenB = 0;
    while (temp2 != NULL)
    {
        lenB++;
        temp2 = temp2->next;
    }
    temp1 = a;
    temp2 = d;
    if (lenA > lenB)
    {
        for (int i = 1; i <= lenA - lenB; i++)
        {
            temp1 = temp1->next;
        }
    }
    if (lenA < lenB)
    {
        for (int i = 1; i <= lenB - lenA; i++)
        {
            temp2 = temp2->next;
        }
    }
    int count = 0;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1 == temp2)
        {
            count++;
            break;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    if (count == 1)
    {
        cout << temp1->val;
    }
    if (count == 0)
    {
        cout << "no intersection";
    }
}