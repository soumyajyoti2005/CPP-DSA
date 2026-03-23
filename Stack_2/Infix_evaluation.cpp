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

int priority(char ch)
{
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
}

int main()
{
    stack<int> val;
    stack<char> op;
    string s = "2+4/2*3"; //(1+(4+5+2)-3)+(6+8)
    for (int i = 0; i < s.size(); i++)
    {
        if ((int(s[i])) >= 48 && int(s[i]) <= 57)
        {
            val.push(int(s[i]) - 48);
        }
        else // if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
        {
            if (op.size() == 0)
            {
                op.push(s[i]);
            }
            else if (s[i] == '(')
                op.push(s[i]);
            else if (op.top() == '(')
                op.push(s[i]);
            else if (s[i] == ')')
            {
                while (op.top() != '(')
                {
                    char x = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int res = operation(val2, val1, x);
                    val.push(res);
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
                    char x = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int res = operation(val2, val1, x);
                    val.push(res);
                }
                op.push(s[i]);
            }
        }
    }
    while (op.size() > 0)
    {
        char x = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int res = operation(val2, val1, x);
        val.push(res);
    }
    cout << val.top();
}