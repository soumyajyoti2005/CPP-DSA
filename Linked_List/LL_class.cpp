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
class Linked_list
{
public:
    Node *head;
    Node *tail;
    int size;
    Linked_list()
    {
        head = tail = NULL;
        size = 0;
    }

    void Insert_At_End(int n)
    {
        Node *temp = new Node(n);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->next = NULL;
            tail = temp;
        }
        size++;
    }

    void Insert_At_Head(int n)
    {
        Node *temp = new Node(n);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void Insert_At_Index(int idx, int n)
    {
        if (idx == 0)
            Insert_At_Head(n);
        else if (idx == size)
            Insert_At_End(n);
        else if (idx > size || idx < 0)
        {
            return;
        }
        else
        {
            int count = 0;
            Node *temp1 = head;
            Node *temp2 = head;
            while (count < idx)
            {
                temp2 = temp1;
                temp1 = temp1->next;
                count++;
            }
            Node *t = new Node(n);
            t->next = temp1;
            temp2->next = t;
            size++;
        }
    }

    int get(int index)
    {
        if (index < 0 || index >= size)
            return -1;
        else
        {
            Node *t = head;
            for (int i = 0; i < index; i++)
            {
                t = t->next;
            }
            return t->val;
        }
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= size)
            return;
        else if (size == 1)
        {
            head = tail = NULL;
            size = 0;
        }
        else if (index == 0)
        {
            head = head->next;
            size--;
        }
        else if (index == size - 1)
        {
            Node *t = head;
            for (int i = 0; i < index - 1; i++)
            {
                t = t->next;
            }
            t->next = NULL;
            tail = t;
            size--;
        }
        else
        {
            Node *curr = head;
            Node *prev = head;
            for (int i = 0; i < index; i++)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            curr->next = NULL;
            size--;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    Linked_list LL;
    LL.Insert_At_Head(5);
    LL.Insert_At_End(10);
    LL.Insert_At_End(15);
    LL.Insert_At_End(25);
    LL.Insert_At_End(30);
    LL.display();
    LL.deleteAtIndex(1);
    LL.display();
}