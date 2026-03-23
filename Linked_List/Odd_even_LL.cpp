#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};

int main()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(4);
    ListNode *e = new ListNode(5);
    ListNode *f = new ListNode(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    ListNode *head = a;

    ListNode *temp = head;
    ListNode *dummyo = new ListNode(0);
    ListNode *lo = dummyo;
    ListNode *dummye = new ListNode(0);
    ListNode *hi = dummye;
    int i;
    for (i = 1; temp != NULL; i++)
    {
        if (i % 2 != 0)
        {
            dummyo->next = temp;
            dummyo = dummyo->next;
        }
        else
        {
            dummye->next = temp;
            dummye = dummye->next;
        }
        temp = temp->next;
    }
    lo = lo->next;
    hi = hi->next;
    if (i % 2 != 0)
        dummyo->next = NULL;
    else
        dummye->next = NULL;
    dummyo->next = hi;

    temp = head;
    while (lo != NULL)
    {
        cout << lo->val;
        lo = lo->next;
    }
}