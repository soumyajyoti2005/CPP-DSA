#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string pre = "*+23+61"; //"*+23+61" //"-/*+26483"
    stack<string> post;

    for (int i = pre.size() - 1; i >= 0; i--)
    {
        if (int(pre[i]) >= 48 && int(pre[i]) <= 57)
        {
            post.push(to_string(pre[i] - 48));
        }
        else
        {
            string val1 = post.top();
            post.pop();
            string val2 = post.top();
            post.pop();
            string res = "";
            res += val1 + val2 + pre[i];
            post.push(res);
        }
    }
    cout << post.top();
}