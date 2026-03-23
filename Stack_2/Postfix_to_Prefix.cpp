#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string post = "26+4*8/3-";
    stack<string> pre;
    for (int i = 0; i < post.size(); i++)
    {
        if (int(post[i]) >= 48 && int(post[i]) <= 57)
        {
            pre.push(to_string(post[i] - 48));
        }
        else
        {
            string val2 = pre.top();
            pre.pop();
            string val1 = pre.top();
            pre.pop();
            string res = "";
            res += post[i] + val1 + val2;
            pre.push(res);
        }
    }

    cout << pre.top();
}