#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    cout << "enter " << n << " value in the array: ";
    int x;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    n = v.size();
    vector<int> ans(n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        st.push(v[i]);
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        while (st.size() > 0 && v[i] >= st.top())
        {
            st.pop();
        }
        if (st.size() == 0)
        {
            ans[i] = -1;
            st.push(v[i]);
        }
        else
        {
            ans[i] = st.top();
            st.push(v[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}