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
        this->next = NULL;
    }
};

int main()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    // ListNode *c = new ListNode(3);
    // ListNode *d = new ListNode(4);
    // ListNode *e = new ListNode(5);
    // ListNode *f = new ListNode(6);
    // ListNode *g = new ListNode(7);

    a->next = b;
    // b->next = c;
    // c->next = d;
    // d->next = e;
    // e->next = f;
    // f->next = g;
    ListNode *head = a;

    ListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
    }
    ListNode *store;
    int count = 0;
    if (fast != NULL)
    {
        count++;
        store = fast;
        ListNode *temp = head;
        while (temp->next != fast)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }

    ListNode *temp = head;
    ListNode *dummyo = new ListNode(0);
    ListNode *dummye = new ListNode(0);
    ListNode *lo = dummyo;
    ListNode *hi = dummye;

    for (int i = 1; temp != NULL; i++)
    {
        if (i % 2 != 0)
        {
            dummyo->next = temp;
            dummyo = temp;
        }
        else
        {
            dummye->next = temp;
            dummye = temp;
        }
        temp = temp->next;
    }
    dummyo->next = NULL;
    lo = lo->next;
    hi = hi->next;

    ListNode *t1 = lo;
    ListNode *t2 = hi;
    ListNode *k1 = t1->next;
    ListNode *k2 = t2->next;

    while (k1 != NULL && k2 != NULL)
    {
        t2->next = t1;
        t1->next = k2;
        t1 = k1;
        t2 = k2;
        k1 = k1->next;
        k2 = k2->next;
    }
    t2->next = t1;

    if (count == 1)
        t1->next = store;

    while (hi != NULL)
    {
        cout << hi->val;
        hi = hi->next;
    }
}