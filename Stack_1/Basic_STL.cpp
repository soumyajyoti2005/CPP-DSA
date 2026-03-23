#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.top();
}