#include <iostream>
#include <stack>
using namespace std;

void Insert_bottom(stack<int> &st, int x)
{
    stack<int> temp;
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
}

void Insert_at_idx(stack<int> &st, int x, int idx)
{
    if (idx == 0)
    {
        Insert_bottom(st, x);
        return;
    }
    if (idx == st.size())
    {
        st.push(x);
        return;
    }
    stack<int> temp;
    while (st.size() >= idx + 1)
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
}

int main()
{
    stack<int> st;
    for (int i = 1; i <= 5; i++)
    {
        st.push(i * 10);
    }
    Insert_at_idx(st, 60, 2);
    Insert_bottom(st, 70);
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        st.pop();
    }
}