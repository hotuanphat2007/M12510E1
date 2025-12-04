#include <iostream>
using namespace std;
template<class T>
class tinhtoan
{
    T num1, num2;
    public:
    tinhtoan(T n1, T n2)
    {
        num1= n1;
        num2=n2;
    }
    void display()
    {
        cout<< "Number: "<< num1<<" and "<<num2<<endl;
        cout <<"Addition: "<< add()<<endl;
        cout<< "Subtraction: "<< sub()<<endl;
        cout <<"Multiplication: "<<mul()<<endl;
        cout << "Division: "<<div()<<endl;
    }
    T add(){return num1+num2;}
    T sub(){return num1-num2;}
    T mul(){return num1*num2;}
    T div(){return num1/num2;}
};
template<typename Y>
void print(Y arg)
{
    cout << arg << " ";
}
template <typename Y, typename...Args>
void print(Y first, Args...rest)
{
    cout << first<< " ";
    print(rest...);
}
int main()
{
    print(1,3.6,"Ayyo",'H');
    return 0;
}