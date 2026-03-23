#include <iostream>
#include <stack>
using namespace std;
int operation(int val2, int val1, char ch)
{
    if (ch == '+')
        return val1 + val2;
    if (ch == '-')
        return val1 - val2;
    if (ch == '*')
        return val1 * val2;
    if (ch == '/')
        return val1 / val2;
}

int main()
{
    string pre = "*+23+61"; //"*+23+61" //"-/*+26483"
    stack<int> ans;

    for (int i = pre.size() - 1; i >= 0; i--)
    {
        if (int(pre[i]) >= 48 && int(pre[i]) <= 57)
        {
            ans.push(int(pre[i]) - 48);
        }
        else
        {
            int val1 = ans.top();
            ans.pop();
            int val2 = ans.top();
            ans.pop();
            char x = pre[i];
            int res = operation(val2, val1, x);
            ans.push(res);
        }
    }
    cout << ans.top();
}