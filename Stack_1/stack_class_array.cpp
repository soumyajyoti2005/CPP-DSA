#include <iostream>
using namespace std;
class mystack
{
public:
    int arr[100];
    int topidx = -1;
    int size = 0;

    void push(int x)
    {
        if (size == 100)
            return;
        topidx++;
        arr[topidx] = x;
        size++;
    }

    void pop()
    {
        if (topidx == -1)
            return;
        topidx--;
        size--;
    }

    int top()
    {
        if (topidx == -1)
            return -1;
        return arr[topidx];
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
    st.push(30);
    st.push(60);
    st.push(90);
    cout << st.size << endl;
    st.pop();
    cout << st.top() << endl;
    st.push(80);
    cout << st.size << endl;
    cout << st.top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.size << endl;
    st.pop();
    cout << st.top() << endl;
}