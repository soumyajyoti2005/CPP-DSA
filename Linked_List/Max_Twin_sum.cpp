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
    ListNode *a = new ListNode(2);
    ListNode *b = new ListNode(6);
    ListNode *c = new ListNode(8);
    ListNode *d = new ListNode(16);
    ListNode *e = new ListNode(4);
    ListNode *f = new ListNode(30);
    ListNode *g = new ListNode(21);
    ListNode *h = new ListNode(4);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    ListNode *head = a;

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *prev = slow->next;
    ListNode *head2 = prev;
    slow->next = NULL;
    ListNode *temp = prev->next;
    ListNode *k = temp;

    while (temp != NULL)
    {
        temp = temp->next;
        k->next = prev;
        prev = k;
        k = temp;
    }

    head2->next = NULL;
    head2 = prev;

    int sum = 0;
    int maxsum = 0;
    while (head != NULL && head2 != NULL)
    {
        sum = ((head->val) + (head2->val));
        if (sum > maxsum)
        {
            maxsum = sum;
        }
        head = head->next;
        head2 = head2->next;
    }

    cout << maxsum;
}