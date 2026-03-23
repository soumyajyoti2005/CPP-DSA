#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "abc";
    string t = "defgh";
    cout << s + t << " " << s + 'a' << " " << "ab" + s;
    reverse(s.begin(), s.end());
    cout << endl;
    cout << s;
    reverse(t.begin() + 1, t.end() - 1);
    cout << endl;
    cout << t;
}