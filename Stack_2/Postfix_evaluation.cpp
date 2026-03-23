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
    stack<int> res;
    string s = "264*8/+3-";
    for (int i = 0; i < s.size(); i++)
    {
        if ((int(s[i])) >= 48 && int(s[i]) <= 57)
        {
            res.push(int(s[i]) - 48);
        }
        else
        {
            int val2 = res.top();
            res.pop();
            int val1 = res.top();
            res.pop();
            res.push(operation(val2, val1, s[i]));
        }
    }

    cout << res.top();
}