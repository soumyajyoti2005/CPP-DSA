#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    string str = "I am a math lover. math i love math too much";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    // for (int i = 0; i <= v.size() - 1; i++)
    // {
    //     cout << v[i] << " ";
    // }
    int count = 1;
    int max = 0;
    int idx = 0;
    for (int i = 0; i <= v.size() - 2; i++)
    {
        if (v[i + 1] == v[i])
        {
            count++;
        }
        else
            count = 1;
        if (count > max)
        {
            max = count;
            idx = i;
        }
    }
    cout << max << endl;
    cout << v[idx];
}