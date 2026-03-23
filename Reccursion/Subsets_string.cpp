#include <iostream>
#include <vector>
#include <string>
using namespace std;
void subsets(string t, string s, vector<string> &v)
{

    if (s == "")
    {
        // cout << t << endl;
        // return;
        v.push_back(t);
        return;
    }
    subsets(t + s[0], s.substr(1), v);
    subsets(t, s.substr(1), v);
}
int main()
{
    vector<string> v;
    subsets("", "abc", v);
    // for(string ele : )
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}