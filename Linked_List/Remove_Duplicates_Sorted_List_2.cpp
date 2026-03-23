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
    ListNode *b = new ListNode(1);
    ListNode *c = new ListNode(1);
    ListNode *d = new ListNode(1);
    ListNode *e = new ListNode(1);
    ListNode *f = new ListNode(1);
    ListNode *g = new ListNode(1);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    ListNode *head = a;

    ListNode *dummy = new ListNode(0);
    ListNode *lo = dummy;
    int count = 1;

    ListNode *temp1 = head;
    ListNode *temp2 = head->next;
    while (temp2 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            if (count == 1)
            {
                dummy->next = temp1;
                temp1 = temp2;
                temp2 = temp2->next;
                dummy = dummy->next;
            }
            else if (count >= 2)
            {
                temp1 = temp2;
                temp2 = temp2->next;
            }
            count = 1;
        }
        else if (temp1->val == temp2->val)
        {
            temp2 = temp2->next;
            count++;
        }
    }

    if (count == 1)
    {
        dummy->next = temp1;
    }

    else
    {
        dummy->next = NULL;
    }
    lo = lo->next;

    while (lo != NULL)
    {
        cout << lo->val;
        lo = lo->next;
    }
}