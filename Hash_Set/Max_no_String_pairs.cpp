#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> words;
    for (int i = 0; i < 2; i++)
    {
        string s;
        cin >> s;
        words.push_back(s);
    }

    unordered_set<string> set;
    set.insert("");
    int count = 0;
    for (int i = 0; i < words.size(); i++)
    {
        if (set.find(words[i]) != set.end())
        {
            count++;
        }
        set.insert(words[i]);
        string t = words[i];
        reverse(t.begin(), t.end());
        set.insert(t);
    }

    cout << count;
}