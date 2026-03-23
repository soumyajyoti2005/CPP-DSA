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

class mystack
{
public:
    ListNode *top = NULL;
    int size = 0;

    void push(int x)
    {
        ListNode *a = new ListNode(x);
        a->next = top;
        top = a;
        size++;
    }

    void pop()
    {
        if (top == NULL)
        {
            return;
        }
        ListNode *prev = top;
        top = top->next;
        delete prev;
        size--;
    }

    int top_ele()
    {
        if (size == 0)
            return -1;
        return top->val;
    }

    bool isempty()
    {
        if (size == 0)
            return true;
        return false;
    }
};

int main()
{
    mystack st;
    st.push(20);
    st.push(30);
    cout << st.size << endl;
    cout << st.isempty() << endl;
    cout << st.top_ele() << endl;
    st.pop();
    st.push(40);
    cout << st.top_ele() << endl;
    st.push(50);
}