// not completed yet but done in leetcode
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    sort(v.begin(), v.end());
    for (int i = 0; i <= 2; i++)
    {
        cout << v[i] << " ";
    }
}