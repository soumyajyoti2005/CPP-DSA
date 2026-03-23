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
    ListNode *b = new ListNode(3);
    ListNode *c = new ListNode(4);
    ListNode *d = new ListNode(6);
    ListNode *e = new ListNode(2);
    ListNode *f = new ListNode(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    int x = 3;

    ListNode *temp = a;
    ListNode *dummy1 = new ListNode(0);
    ListNode *dummy2 = new ListNode(0);
    ListNode *lo = dummy1;
    ListNode *hi = dummy2;
    while (temp != NULL)
    {
        if (temp->val < x)
        {
            dummy1->next = temp;
            dummy1 = temp;
            temp = temp->next;
        }
        else
        {
            dummy2->next = temp;
            dummy2 = temp;
            temp = temp->next;
        }
    }
    if (dummy2->next != NULL)
        dummy2->next = NULL;
    else if (dummy1->next != NULL)
        dummy1->next = NULL;
    lo = lo->next;
    hi = hi->next;
    dummy1->next = hi;
    while (lo != NULL)
    {
        cout << lo->val << " ";
        lo = lo->next;
    }
}
