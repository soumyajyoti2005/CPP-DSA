// NOT DONE.......

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
    else
        return val1 / val2;
}

int priority(char ch)
{
    if (ch == '*' || ch == '/')
        return 2;
    else
        return 1;
}

int main()
{
    string s = "  7  ";
    stack<int> ans;
    stack<char> op;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            continue;
        if (int(s[i]) >= 48 && int(s[i]) <= 57)
        {
            ans.push(int(s[i]) - 48);
        }
        else
        {
            if (op.size() == 0)
                op.push(s[i]);
            else if (priority(op.top()) < priority(s[i]))
            {
                op.push(s[i]);
            }
            else
            {
                while (op.size() > 0 && priority(op.top()) >= priority(s[i]))
                {
                    int val2 = ans.top();
                    ans.pop();
                    int val1 = ans.top();
                    ans.pop();
                    char x = op.top();
                    op.pop();
                    int res = operation(val2, val1, x);
                    ans.push(res);
                }
                op.push(s[i]);
            }
        }
    }
    while (op.size() > 0)
    {
        int val2 = ans.top();
        ans.pop();
        int val1 = ans.top();
        ans.pop();
        char x = op.top();
        op.pop();
        int res = operation(val2, val1, x);
        ans.push(res);
    }
    cout << ans.top();
}