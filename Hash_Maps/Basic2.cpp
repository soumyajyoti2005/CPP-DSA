#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{

    unordered_map<string, int> map;
    map["soumya"] = 45;

    for (auto p : map)
    {
        cout << p.first << " " << p.second << endl;
    }
}