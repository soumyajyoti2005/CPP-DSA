#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;

    ListNode(int val)
    {
        this->val = val;
        prev = nullptr;
        next = nullptr;
    }
};

int main()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);

    a->next = b;
    b->next = c;

    b->prev = a;
    c->prev = b;
}