#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, x;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> v(n, 0);
    vector<int> w;
    cout << "enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        w.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {

        if (v[w.at(i)] == 0)
        {
            v.at(w.at(i))++;
        }
        else if (v[w.at(i)] == 1)
        {
            cout << "duplicate element is: " << w.at(i);
            break;
        }
    }
}