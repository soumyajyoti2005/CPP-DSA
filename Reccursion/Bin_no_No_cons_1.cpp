#include <iostream>
using namespace std;
void Bin_no(string num, int i, int n)
{

    if (i == n)
    {
        cout << num << endl;
        return;
    }
    if (num == "" || num[num.length() - 1] != '1')
        Bin_no(num + '1', i + 1, n);
    Bin_no(num + '0', i + 1, n);
}

int main()
{
    Bin_no("", 0, 3);
}