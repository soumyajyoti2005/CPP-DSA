#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    string s = "anagram";
    string t = "nagaram";

    unordered_map<char, int> map1;
    unordered_map<char, int> map2;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        map1[s[i]]++;
        map2[t[i]]++;
    }
    for (auto p : map1)
    {
        char ch = p.first;
        int freq1 = p.second;

        if (map2.find(ch) != map2.end())
        {
            int freq2 = map2[ch];
            if (freq1 != freq2)
            {
                count++;
                break;
            }
        }
        else
        {
            count++;
            break;
        }
    }
    if (count == 0)
        cout << true;
    else
        cout << false;
}