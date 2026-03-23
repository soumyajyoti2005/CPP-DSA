#include <iostream>
using namespace std;
int main()
{
    int start, goal;
    cout << "enter start and goal number: ";
    cin >> start >> goal;
    start = start ^ goal;
    int count = 0;
    for (int i = 0; start; i++)
    {
        start = start & (start - 1);
        count++;
    }
    cout << count;
}