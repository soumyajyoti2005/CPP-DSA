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
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(4);
    ListNode *e = new ListNode(5);
    ListNode *f = new ListNode(6);
    ListNode *g = new ListNode(7);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    ListNode *head = a;

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *prev = slow;
    ListNode *temp = prev->next;
    ListNode *k;
    prev->next = NULL;
    while (temp != NULL)
    {
        k = temp->next;
        temp->next = prev;
        prev = temp;
        temp = k;
    }

    ListNode *i = head;
    ListNode *j = prev;
    ListNode *m = i->next;
    ListNode *n = j->next;

    int count = 1;
    while (i != j)
    {
        if (count % 2 != 0)
        {
            i->next = j;
            i = m;
            m = m->next;
        }
        else
        {
            j->next = i;
            j = n;
            n = n->next;
        }
        count++;
    }
    while (head != NULL)
    {
        cout << head->val;
        head = head->next;
    }
}