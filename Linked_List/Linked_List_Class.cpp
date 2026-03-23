#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
Node *Find_tail(Node *temp)
{
    Node *tail;
    while (temp != NULL)
    {
        tail = temp;
        temp = temp->next;
    }
    return tail;
}
class Linked_List
{
public:
    Node *head;
    Node *tail;
    Linked_List(Node *head)
    {
        this->head = head;
        this->tail = Find_tail(head);
    }
    void Insert_At_End(int n)
    {
        Node *t = new Node(n);
        tail->next = t;
        t->next = NULL;
        tail = t;
    }
};
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    Linked_List LL(a);
    LL.Insert_At_End(50);
    Node *temp = a;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    LL.Insert_At_End(60);
    Node *temp2 = a;
    while (temp2 != NULL)
    {
        cout << temp2->val << " ";
        temp2 = temp2->next;
    }
}