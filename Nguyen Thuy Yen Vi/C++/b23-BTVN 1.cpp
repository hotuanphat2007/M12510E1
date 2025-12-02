#include <iostream>
using namespace std;
class Complex
{
    private:
        float an;
        float be;
    public:
        Complex(): an(0), be(0) {}
        Complex(float a, float b): an(a), be(b) {}
        Complex operator + (const Complex &c)
        {
            return Complex(an + c.an, be + c.be);
        }
        Complex operator - (const Complex &c)
        {
            return Complex(an - c.an, be - c.be);
        }
        Complex operator * (const Complex &c)
        {
            return Complex(an * c.an, be *c.be);
        }
        void display()
        {
            cout << "an: " << an << "    be: " << be << endl;
        }
};
int main()
{
    Complex c1(2,3), c2(1,4);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2;
    c3.display();
    c4.display();
    c5.display();
    return 0;
}
