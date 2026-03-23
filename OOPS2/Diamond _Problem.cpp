#include <iostream>
using namespace std;
class A
{
public:
    int a;
};
class B : virtual public A
{
public:
    int b;
    void showb()
    {
        cout << a;
        cout << b;
    }
};
class C : virtual public A
{
public:
    int c;
    void showc()
    {
        cout << a;
        cout << c;
    }
};
class D : public B, public C
{
public:
    int d;
    void showd()
    {
        cout << b;
        cout << c;
        cout << a;
    }
};
int main()
{
}