#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(6);
    v.push_back(8);
    v.push_back(5);
    v.push_back(11);
    v.push_back(9);

    vector<int> ans(v.size());
    stack<int> st;
    ans[v.size() - 1] = 0;
    st.push(v[v.size() - 1]);

    int count;
    for (int i = v.size() - 2; i >= 0; i--)
    {
        count = 0;
        while (st.size() > 0 && st.top() < v[i])
        {
            st.pop();
            count++;
        }
        if (st.size() > 0)
        {
            ans[i] = count + 1;
        }
        else
        {
            ans[i] = count;
        }
        st.push(v[i]);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}