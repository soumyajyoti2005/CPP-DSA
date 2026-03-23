#include <iostream>
#include <stack>
using namespace std;
void display(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    display(st);
    cout << x << " ";
}
int main()
{
    stack<int> st;
    for (int i = 1; i <= 5; i++)
    {
        st.push(i * 10);
    }
    display(st);
}