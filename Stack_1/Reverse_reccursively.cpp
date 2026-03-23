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
void reverse_stack(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    reverse_stack(st);
    Insert_bottom(st, x);
}
int main()
{
    stack<int> st;
    for (int i = 1; i <= 5; i++)
    {
        st.push(i * 10);
    }
    reverse_stack(st);
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        st.pop();
    }
}