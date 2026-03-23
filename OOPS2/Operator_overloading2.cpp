// some operator can't be overloaded like '.','::','sizeof()','?:'
#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int imaginary;
    complex operator+(complex &A)
    {
        complex C;
        C.real = A.real + this->real;
        C.imaginary = A.imaginary + this->imaginary;
        return C;
    }
};

int main()
{
    complex a1, a2;
    a1.real = 10;
    a1.imaginary = 5;
    a2.real = 10;
    a2.imaginary = 5;
    complex a3 = a1 + a2;
    cout << a3.real << " " << a3.imaginary;
}