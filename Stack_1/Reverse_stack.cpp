#include <iostream>
#include <stack>
using namespace std;
void reverse_stack(stack<int> &st)
{
    stack<int> temp;
    stack<int> rt;
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() > 0)
    {
        rt.push(temp.top());
        temp.pop();
    }
    while (rt.size() > 0)
    {
        st.push(rt.top());
        rt.pop();
    }
}
int main()
{
    stack<int> st;
    for (int i = 1; i <= 5; i++)
    {
        st.push(i);
    }
    reverse_stack(st);
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        st.pop();
    }
}