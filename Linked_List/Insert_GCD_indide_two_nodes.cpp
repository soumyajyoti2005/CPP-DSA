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

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    int r = b % a;
    while (r != 0)
    {
        b = a;
        a = r;
        r = b % a;
    }
    return a;
}

int main()
{
    ListNode *a = new ListNode(2);
    ListNode *b = new ListNode(6);
    // ListNode *c = new ListNode(8);
    // ListNode *d = new ListNode(16);
    // ListNode *e = new ListNode(4);
    // ListNode *f = new ListNode(9);
    // ListNode *g = new ListNode(21);

    a->next = b;
    // b->next = c;
    // c->next = d;
    // d->next = e;
    // e->next = f;
    // f->next = g;
    ListNode *head = a;

    ListNode *temp1 = head;
    ListNode *temp2 = head->next;

    while (temp2 != NULL)
    {
        ListNode *gcd_node = new ListNode(gcd(temp1->val, temp2->val));
        temp1->next = gcd_node;
        gcd_node->next = temp2;
        temp1 = temp2;
        temp2 = temp2->next;
    }

    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}