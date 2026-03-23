#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v[2] << endl;
    vector<int> vec(5, 8);
    cout << vec[4];
}