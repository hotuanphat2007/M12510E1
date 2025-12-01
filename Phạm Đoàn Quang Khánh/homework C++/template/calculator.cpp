#include<iostream>
using namespace std;
template<class T>
class Calculator
{
    private:
        T a, b;
    public:
        Calculator(T so1, T so2): a(so1), b(so2){}

        T add()
        {
            return a+b;
        }
        T subtract()
        {
            return a-b;
        }
        T multiply()
        {
            return a*b;
        }
        T divide()
        {
            return a/b;
        }

        void display()
        {
            cout<<"2 so da nhap la: "<<a<<" va "<<b<<endl;
            cout<<"Tong 2 so la: "<<add()<<endl;
            cout<<"Hieu 2 so la: "<<subtract()<<endl;
            cout<<"Tich 2 so la: "<<multiply()<<endl;
            cout<<"Thuong 2 so la: "<<divide()<<endl;
        }
};
int main()
{
    cout<<"Nhap vao 2 so nguyen: ";
    int a, b;
    cin>>a>>b;
    cout<<"Nhap vao 2 so thuc: ";
    float c,d;
    cin>>c>>d;
    Calculator c1(a,b);
    Calculator c2(c,d);
    c1.display();
    c2.display();
    return 0;
}