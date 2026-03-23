#include <iostream>
#include <string>
#include <vector>
using namespace std;
void parentheses(string s, int open, int close, int n)
{
    if (open == n && close == n)
    {
        cout << s;
        cout << endl;
        return;
    }
    if (open < n)
        parentheses(s + '(', open + 1, close, n);
    if (close < open && close < n)
        parentheses(s + ')', open, close + 1, n);
}
int main()
{
    parentheses("", 0, 0, 3);
}