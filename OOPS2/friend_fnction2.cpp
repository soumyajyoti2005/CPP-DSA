#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int imaginary;
    friend complex operator+(complex &A);
};
complex operator+(complex &A, complex &B)
{
    complex C;
    C.real = A.real + B.real;
    C.imaginary = A.imaginary + B.imaginary;
    return C;
}

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