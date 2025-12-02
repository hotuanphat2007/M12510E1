#include <iostream>
using namespace std;

class Complex 
{
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Phép cộng 
    Complex operator+(const Complex& c) const 
    {
        return Complex(real + c.real, imag + c.imag);
    }
    // phép trừ
    Complex operator-(const Complex& c) const 
    {
        return Complex(real - c.real, imag - c.imag);
    }
    // Phép nhân
    Complex operator*(const Complex& c) const 
    {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real );
    }

    // In object
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.real;
        if (c.imag >= 0)
            os << " + " << c.imag << "i";
        else
            os << " - " << -c.imag << "i";
        return os;
    }
    
};

int main() 
{
    Complex a(1, 2), b(3, 4);

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    return 0;
}
