#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int imaginary;
    complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    complex(complex *A, complex *B)
    {
        cout << "real part " << (A->real) + (B->real) << " ";
        cout << "imaginary part " << (A->imaginary) + (B->imaginary) << " ";
    }
};

int main()
{
    complex a1(10, 5);
    complex a2(20, 5);
    complex(&a1, &a2);
}