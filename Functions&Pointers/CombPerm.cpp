#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
        f = f * i;
    return f;
}
int perm(int n, int r)
{
    int npr = fact(n) / fact(n - r);
    return npr;
}
int comb(int n, int r)
{
    int ncr = (fact(n)) / (fact(r) * fact(n - r));
    return ncr;
}
int main()
{
    int n, r;
    cout << "enter the value of n and r: ";
    cin >> n >> r;
    cout << "the value of combination is  " << comb(n, r) << endl;
    cout << "the value of permutation is: " << perm(n, r);
}