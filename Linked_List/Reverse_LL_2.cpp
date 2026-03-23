// not completed,some problem happening

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
    ListNode *f = new ListNode(1);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    ListNode *head = a;
    int left = 1;
    int right = 3;

    ListNode *l = head;
    for (int i = 1; i < left; i++)
    {
        l = l->next;
    }
    ListNode *r = head;
    for (int i = 1; i < right; i++)
    {
        r = r->next;
    }
    ListNode *store = r->next;
    ListNode *before = head;
    for (int i = 1; i < left - 1; i++)
    {
        before = before->next;
    }

    ListNode *prev = l;
    ListNode *temp = prev->next;
    ListNode *k;
    while (temp != store)
    {
        k = temp;
        temp = temp->next;
        k->next = prev;
        prev = k;
    }
    before->next = r;
    l->next = store;

    while (head != NULL)
    {
        cout << head->val;
        head = head->next;
    }
}