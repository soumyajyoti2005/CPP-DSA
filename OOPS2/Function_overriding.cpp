#include <iostream>
using namespace std;
class A
{
public:
    int a_public;
    void show1()
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
    b.show1();
    A a;
    a.show1();
    b.A ::show1();
    b.show2();

    A *a1;
    a1 = &b;
    a1->a_public = 10;
    a1->show1();
}