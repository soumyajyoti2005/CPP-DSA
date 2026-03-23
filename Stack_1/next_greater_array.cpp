#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> next_greater(vector<int> v, vector<int> &ans)
{
    int n = v.size();
    ans[n - 1] = -1;
    stack<int> st;
    st.push(v[n - 1]);
    for (int i = n - 2; i >= 0; i--) // T.C->O(n)
    {
        while (st.size() > 0 && st.top() <= v[i])
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
    return ans;
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
    next_greater(v, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}
