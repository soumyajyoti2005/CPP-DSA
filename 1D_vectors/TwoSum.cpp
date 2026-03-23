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
        for (int j = i + 1; j < n; j++)
        {
            if (v.at(i) + v.at(j) == key)
                cout << "doublet pair: " << "(" << v[i] << "," << v[j] << ")" << endl;
        }
    }
}