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
    ListNode *c = new ListNode(2);
    ListNode *d = new ListNode(3);
    ListNode *e = new ListNode(3);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    ListNode *temp1 = a;
    ListNode *temp2 = temp1->next;
    while (temp2 != NULL)
    {
        if (temp1->val == temp2->val)
        {
            temp2 = temp2->next;
        }
        else if (temp1->val != temp2->val)
        {
            temp1->next = temp2;
            temp1 = temp2;
            temp2 = temp2->next;
        }
    }
    temp1->next = NULL;

    // for traversing
    ListNode *temp_trav = a;
    while (temp_trav != NULL)
    {
        cout << temp_trav->val << " ";
        temp_trav = temp_trav->next;
    }
}