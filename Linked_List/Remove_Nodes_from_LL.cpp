#include <iostream>
#include <stack>
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

void store_max(ListNode *head, stack<int> &st)
{
    if (head->next == NULL)
    {
        st.push(head->val);
        return;
    }
    store_max(head->next, st);

    if (st.top() <= head->val)
    {
        st.push(head->val);
    }
}

int main()
{
    ListNode *a = new ListNode(13);
    ListNode *b = new ListNode(8);
    // ListNode *c = new ListNode(1);
    // ListNode *d = new ListNode(1);
    // ListNode *e = new ListNode(1);
    // ListNode *f = new ListNode(9);
    // ListNode *g = new ListNode(21);

    a->next = b;
    // b->next = c;
    // c->next = d;
    // d->next = e;
    // e->next = f;
    // f->next = g;
    ListNode *head = a;

    stack<int> st;
    store_max(head, st);

    ListNode *dummy = new ListNode(0);
    ListNode *head_new = dummy;

    while (st.size() > 0)
    {
        ListNode *Node = new ListNode(st.top());
        st.pop();
        dummy->next = Node;
        dummy = dummy->next;
    }

    head_new = head_new->next;
    while (head_new != NULL)
    {
        cout << head_new->val << " ";
        head_new = head_new->next;
    }
}