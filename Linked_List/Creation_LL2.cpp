#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    friend void traverse(Node *head);
};
void traverse(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int main()
{
    Node *prev;
    for (int i = 2; i >= 1; i--)
    {
        Node *LL = new Node;
        int x;
        if (i == 2)
            LL->next = NULL;
        else
        {
            LL->next = prev;
        }
        cout << "enter the value in list " << i << " : ";
        cin >> x;
        LL->val = x;
        prev = LL;
    }
    cout << endl;
    traverse(prev);
}