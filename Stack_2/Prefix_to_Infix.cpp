#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string pre = "-/*+26483"; //"*+23+61" //"-/*+26483"
    stack<string> in;

    for (int i = pre.size() - 1; i >= 0; i--)
    {
        if (int(pre[i]) >= 48 && int(pre[i]) <= 57)
        {
            in.push(to_string(pre[i] - 48));
        }
        else
        {
            string val1 = in.top();
            in.pop();
            string val2 = in.top();
            in.pop();
            string res = "";
            res += '(' + val1 + pre[i] + val2 + ')';
            in.push(res);
        }
    }
    cout << in.top();
}