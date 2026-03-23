#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string post = "26+4*8/3-";
    stack<string> in;
    for (int i = 0; i < post.size(); i++)
    {
        if (int(post[i]) >= 48 && int(post[i]) <= 57)
        {
            in.push(to_string(post[i]-48));
        }
        else
        {
            string val2 = in.top();
            in.pop();
            string val1 = in.top();
            in.pop();
            string res = "";
            res += '(' + val1 + post[i] + val2 + ')';
            in.push(res);
        }
    }

    cout << in.top();
}