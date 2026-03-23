#include <iostream>
#include <vector>
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
ListNode *merge(ListNode *list1, ListNode *list2)
{
    if (list1 == NULL && list2 == NULL)
        return NULL;
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    ListNode *dummy = new ListNode(0);
    ListNode *temp = dummy;
    ListNode *temp1 = list1;
    ListNode *temp2 = list2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val >= temp2->val)
        {
            temp->next = temp2;
            temp = temp2;
            temp2 = temp2->next;
        }
        else
        {
            temp->next = temp1;
            temp = temp1;
            temp1 = temp1->next;
        }
    }
    if (temp1 == NULL)
    {
        while (temp2 != NULL)
        {
            temp->next = temp2;
            temp = temp2;
            temp2 = temp2->next;
        }
    }
    if (temp2 == NULL)
    {
        while (temp1 != NULL)
        {
            temp->next = temp1;
            temp = temp1;
            temp1 = temp1->next;
        }
    }
    return dummy->next;
}
ListNode *merge_k_array(ListNode *dummy, vector<ListNode *> v, int i)
{
    if (i == v.size())
    {
        return dummy;
    }
    merge(dummy, v[i]);
    i++;
    return merge_k_array(dummy, v, i);
}

int main()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(3);
    ListNode *c = new ListNode(4);
    ListNode *d = new ListNode(6);
    ListNode *e = new ListNode(7);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    ListNode *f = new ListNode(1);
    ListNode *g = new ListNode(2);
    ListNode *h = new ListNode(8);
    ListNode *i = new ListNode(9);
    f->next = g;
    g->next = h;
    h->next = i;

    ListNode *j = new ListNode(5);
    ListNode *k = new ListNode(10);
    j->next = k;

    vector<ListNode *> v;
    v.push_back(a);
    v.push_back(f);
    v.push_back(j);

    ListNode *dummy = new ListNode(0);
    dummy = merge_k_array(dummy, v, 0);
    dummy = dummy->next;
    while (dummy != NULL)
    {
        cout << dummy->val << " ";
        dummy = dummy->next;
    }
}