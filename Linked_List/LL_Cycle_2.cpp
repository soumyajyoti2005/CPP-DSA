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
    ListNode *g = new ListNode(7);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = d;

    int count = 0;
    ListNode *slow = a;
    ListNode *fast = a;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        ListNode *temp = a;
        while (1)
        {
            temp = temp->next;
            slow = slow->next;
            if (slow == temp)
            {
                cout << temp->val;
                break;
            }
        }
    }
    if (count == 0)
        cout << "no cycle exist ";
}