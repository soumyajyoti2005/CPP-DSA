#include <iostream>
using namespace std;
class A
{
private:
    int a_private; // a_private can't be inheritted by class B , not accessed by main function;
protected:
    int a_protected; // a_protected can be inheritted by class B but not by main fun();
public:
    int a_public; // a_public can accesible/inheritted by all;
};
class B : protected A
{ // it's mean all paremeter of class A is Public For Class B
public:
    int b_public;
    void show1()
    {
        cout << a_public;
    }
    void show2()
    {
        cout << a_protected;
    }
};
class C : public B
{ // a_public and a_protected also inharrite
public:
    int c_public;
    void show3()
    {
        cout << a_public;
    }
    void show4()
    {
        cout << a_protected;
    }
};

class D: private A{
   public:
   int d_public;
   void show4()
    {
        cout << a_public;
    }
    void show5()
    {
        cout << a_protected;
    }
};
int main()
{
    B d;
    d.b_public = 18;
    
    

    
}