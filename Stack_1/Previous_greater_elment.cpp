#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void prev_greater(vector<int> v, vector<int> &ans)
{
    int n = v.size();
    ans[0] = -1;
    stack<int> st;
    st.push(v[0]);

    for (int i = 1; i <= n - 1; i++)
    {
        while (st.size() > 0 && st.top() < v[i])
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
}

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
    vector<int> ans(n);
    prev_greater(v, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}