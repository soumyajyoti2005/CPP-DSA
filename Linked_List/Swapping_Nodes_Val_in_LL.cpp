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
    int k = 1;

    ListNode *fast = head;
    ListNode *store;
    for (int i = 1; i < k; i++)
    {
        fast = fast->next;
    }
    store = fast; // storing Kth node from starting

    ListNode *slow = head;
    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    int t = slow->val; // after iteration slow has value of kth node from ending
    slow->val = store->val;
    store->val = t;

    while (head != NULL)
    {
        cout << head->val;
        head = head->next;
    }
}