#include<iostream>
using namespace std;
//Tái định nghĩa các toán tử để có thể + - * trực tiếp các phần tử class
class Complex
{
    private:
        int a;
        int b;
    public:
        Complex():a(0),b(0){}
        Complex(int sothunhat, int sothuhai) : a(sothunhat), b(sothuhai){}
        Complex operator+(const Complex &c)
        {
            return Complex(a+c.a, b+c.b);
        }
        Complex operator-(const Complex &c)
        {
            return Complex(a-c.a, b-c.b);
        }
        Complex operator*(const Complex &c)
        {
            return Complex(a*c.a, b*c.b);
        }
        void display()
        {
            cout<<"a la: "<<a;
            cout<<" b la: "<<b;
            cout<<endl;
        }
};
int main()
{
    int z,y,x,v;
    cout<<"Nhap vao 2 so cho c1: ";
    cin>>z>>y;
    cout<<"Nhap vao 2 so cho c2: ";
    cin>>x>>v;
    Complex c1(z,y), c2(x,v);
    Complex c3=c1+c2;
    Complex c4=c1-c2;
    Complex c5=c1*c2;
    cout<<"Toong la: ";
    c3.display();
    cout<<"Hieu la: ";
    c4.display();
    cout<<"Tich la: ";
    c5.display();
    return 0;
}