#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    pair<int, int> p;
    p.first = 1;
    p.second = 3;

    unordered_map<string, int> map;
    map.insert({"soumya", 35});
    map.insert({"abc", 45});
    map.insert({"def", 90});

    for (pair<string, int> p : map)
    {
        cout << p.first << " " << p.second << endl;
    }
}