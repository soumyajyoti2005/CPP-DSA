#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // need not mention the size...
    // for inserting value in vectors don't use [];
    v.push_back(6);
    cout << v.size() << endl;
    v.push_back(7);
    cout << v.size() << endl;
    v.push_back(9);
    cout << v.size() << endl;
    v.push_back(2);
    cout << v.size() << endl;
    // for modify or printing we can use [] like arays;
    cout << v[0] << " " << v[1];
    v.push_back(6);
    cout << v.capacity() << endl;
    v.push_back(7);
    cout << v.capacity() << endl;
    v.push_back(9);
    cout << v.capacity() << endl;
    v.push_back(2);
    cout << v.capacity() << endl;
}
