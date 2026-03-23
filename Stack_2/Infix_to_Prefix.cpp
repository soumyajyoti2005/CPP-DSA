#include <iostream>
#include <stack>
using namespace std;

int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}

int main()
{
    string s = "(2+6)*4/8-3";
    stack<string> pre;
    stack<char> op;
    for (int i = 0; i < s.size(); i++)
    {
        if (int(s[i]) >= 48 && int(s[i]) <= 57)
        {
            pre.push(to_string(s[i] - 48));
        }
        else
        {
            if (op.size() == 0)
            {
                op.push(s[i]);
            }
            else if (s[i] == '(')
            {
                op.push(s[i]);
            }
            else if (op.top() == '(')
            {
                op.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (op.top() != '(')
                {
                    string val2 = pre.top();
                    pre.pop();
                    string val1 = pre.top();
                    pre.pop();
                    char x = op.top();
                    op.pop();
                    string res = "";
                    // res.push_back(x);
                    res = x + val1 + val2;
                    pre.push(res);
                }
                op.pop();
            }
            else if (priority(s[i]) > priority(op.top()))
            {
                op.push(s[i]);
            }
            else
            {
                while (op.size() > 0 && op.top() != '(' && priority(s[i]) <= priority(op.top()))
                {
                    string val2 = pre.top();
                    pre.pop();
                    string val1 = pre.top();
                    pre.pop();
                    char x = op.top();
                    op.pop();
                    string res = "";
                    res.push_back(x);
                    res = res + val1 + val2;
                    pre.push(res);
                }
                op.push(s[i]);
            }
        }
    }

    while (op.size() > 0)
    {
        string val2 = pre.top();
        pre.pop();
        string val1 = pre.top();
        pre.pop();
        char x = op.top();
        op.pop();
        string res = "";
        res.push_back(x);
        res = res + val1 + val2;
        pre.push(res);
    }
    cout << pre.top();
}