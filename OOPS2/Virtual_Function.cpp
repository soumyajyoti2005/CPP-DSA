#include <iostream>
using namespace std;
class A
{
public:
    int a_public;
    virtual void show1() // runtime binding as virtual
    {
        cout << "A is calling " << endl;
    }
    void show2()
    {
        cout << "A is again calling " << endl;
    }
};
class B : public A
{
public:
    int b_public;
    void show1()
    {
        cout << "B is calling " << endl;
    }
};
int main()
{
    B b;
    A *a1;
    a1 = &b;
    a1->a_public = 10;
    a1 = new B;
    a1->show1();
    a1 = new A;
    a1->show1();
}