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
    ListNode *e = new ListNode(1);
    ListNode *f = new ListNode(1);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    ListNode *head = a;

    // finding mid node
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast->next == NULL)
    {
        slow = head;
        fast = head;
        while (fast->next->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = slow->next->next;
    }
    // doing reverse the linked list from middle to end
    ListNode *prev = slow->next;
    ListNode *temp = prev->next;
    ListNode *k;
    while (temp != NULL)
    {
        k = temp;
        temp = temp->next;
        k->next = prev;
        prev = k;
    }
    ListNode *tail = k;

    slow->next->next = NULL;
    slow->next = NULL;

    // checking for pallindrome or not
    int count = 0;
    while (head != NULL)
    {
        if (head->val == tail->val)
        {
            head = head->next;
            tail = tail->next;
        }
        else
        {
            count++;
            break;
        }
    }

    if (count == 1)
        cout << "false";
    else
        cout << "true";
}