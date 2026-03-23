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
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    int k = 2;
    // step 1 measuring length of list
    int l = 0;
    ListNode *head = a;
    ListNode *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    cout<<l;
    // step 2 building connection or cycle with first node
    temp = head;
    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    temp->next = head;
    // step 3 traverse to l-k-1 node and l-k node's adress head and giving Null in (l-k-1 Node)->next=NULL
    for (int i = 0; i <= l - k - 1; i++)
    {
        temp = temp->next;
    }
    head = temp->next;
    temp->next = NULL;
    // for traverse
    temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}