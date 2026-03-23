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
    ListNode *e = new ListNode(7);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    ListNode *f = new ListNode(1);
    ListNode *g = new ListNode(2);
    ListNode *h = new ListNode(5);
    ListNode *i = new ListNode(8);
    f->next = g;
    g->next = h;
    h->next = i;

    ListNode *dummy = new ListNode(0);
    ListNode *temp = dummy;
    ListNode *temp1 = a;
    ListNode *temp2 = f;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val >= temp2->val)
        {
            ListNode *temp_new = new ListNode(temp2->val);
            dummy->next = temp_new;
            dummy = temp_new;
            temp2 = temp2->next;
        }
        else
        {
            ListNode *temp_new = new ListNode(temp1->val);
            dummy->next = temp_new;
            dummy = temp_new;
            temp1 = temp1->next;
        }
    }
    if (temp1 == NULL)
    {
        while (temp2 != NULL)
        {
            ListNode *temp_new = new ListNode(temp2->val);
            dummy->next = temp_new;
            dummy = temp_new;
            temp2 = temp2->next;
        }
    }
    if (temp2 == NULL)
    {
        while (temp1 != NULL)
        {
            ListNode *temp_new = new ListNode(temp1->val);
            dummy->next = temp_new;
            dummy = temp_new;
            temp1 = temp1->next;
        }
    }
    // traverse
    temp = temp->next;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}