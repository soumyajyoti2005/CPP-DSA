#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void stock_span(vector<int> &v, vector<int> &pgi)
{
    int n = v.size();
    stack<int> st;
    st.push(0);
    pgi[0] = 1;

    for (int i = 1; i <= n - 1; i++)
    {
        while (st.size() > 0 && v[st.top()] < v[i])
            st.pop();
        if (st.size() == 0)
        {
            pgi[i] = -1;
        }
        else
        {
            pgi[i] = st.top();
        }
        st.push(i);
    }

    for (int i = 1; i <= n - 1; i++)
    {
        if (pgi[i] == -1)
            pgi[i] = i + 1;
        else
            pgi[i] = i - pgi[i];
    }
}
int main()
{
    vector<int> v;
    v.push_back(100); // 21473 14891 26474 2116
    v.push_back(80);
    v.push_back(60);
    v.push_back(70);
    v.push_back(60);
    v.push_back(75);
    v.push_back(85);

    vector<int> ans(v.size());
    stock_span(v, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}