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

ListNode *reverse_LL(ListNode *head)
{
    ListNode *prev = head;
    ListNode *temp = head->next;
    ListNode *k;
    while (temp != NULL)
    {
        k = temp;
        temp = temp->next;
        k->next = prev;
        prev = k;
    }
    return k;
}

int main()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(3);
    ListNode *e = new ListNode(2);
    ListNode *f = new ListNode(1);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    ListNode *head = a;

    // finding left mid
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // reverse 2nd half
    ListNode *newhead = reverse_LL(slow);
    slow->next->next = NULL;
    slow->next = newhead;

    // checking for pallindrome or not
    int count = 0;
    while (newhead != NULL)
    {
        if (head->val == newhead->val)
        {
            head = head->next;
            newhead = newhead->next;
        }
        else
        {
            count++;
            break;
        }
    }

    if (count == 1)
        cout << false;
    if (count == 0)
        cout << true;
}