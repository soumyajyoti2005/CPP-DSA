#include <iostream>
using namespace std;
class A
{
private:
    int a_private = 10;

public:
    friend void show1(A &a);
    void show2()
    {
        cout << a_private << endl;
    }
};
void show1(A &a)
{
    cout << a.a_private << endl;
}
int main()
{
    A a;
    show1(a);
}