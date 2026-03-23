#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    vector<int> v;
    cout << "enter no in vector: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
}
