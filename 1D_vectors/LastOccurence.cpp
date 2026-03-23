#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, x, key, c;
    cout << "enter no of elements in vector: ";
    cin >> n;
    cout << "enter elements in vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "enter which no you want: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == v.at(i))
            c = i;
    }
    cout << "the last occurence of " << key << " is index " << c;
}