#include <iostream>
#include <stack>
using namespace std;
int get_element(stack<int> &st, int idx)
{
    stack<int> rt;
    int x;
    while (st.size() >= idx + 1)
    {
        rt.push(st.top());
        if (st.size() == idx + 1)
        {
            x = st.top();
        }
        st.pop();
    }
    while (rt.size() > 0)
    {
        st.push(rt.top());
        rt.pop();
    }
    return x;
}

int main()
{
    stack<int> st;
    for (int i = 1; i <= 5; i++)
    {
        st.push(i * 10);
    }
    cout << get_element(st, 2) << endl;
}