#include <iostream>
using namespace std;

class Complex {
private:
    double re, im;

public:
    Complex() : re(0), im(0) {}
    Complex(double r, double i) : re(r), im(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(re + other.re, im + other.im);
    }
    Complex operator-(const Complex& other) const {
        return Complex(re - other.re, im - other.im);
    }
    Complex operator*(const Complex& other) const {
        return Complex(re * other.re - im * other.im,
                       re * other.im + im * other.re);
    }

    void print() const {
        cout << re;
        if (im >= 0) cout << " + " << im << "i";
        else cout << " - " << -im << "i";
    }
};

int main() {
    Complex c1(2, 3), c2(1, 4), c3;

    c3 = c1 + c2;
    cout << "c1 + c2 = "; c3.print(); cout << "\n";

    c3 = c1 - c2;
    cout << "c1 - c2 = "; c3.print(); cout << "\n";

    c3 = c1 * c2;
    cout << "c1 * c2 = "; c3.print(); cout << "\n";
    return 0;
}
