#include <iostream>
using namespace std;
template<typename T>
void swapval(T &a, T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=3, b=5;
    string c="Quang Khanh", d="Pham Doan";
    float e=3.14, f=4.63;
    cout<<"Truoc khi swap: "<<endl;
    cout<<"a= "<<a<<" b= "<<b<<endl;
    cout<<"c= "<<c<<" d= "<<d<<endl;
    cout<<"e= "<<e<<" f= "<<f<<endl;
    swapval(a,b);
    swapval(c,d);
    swapval(e,f);
    cout<<"Sau khi swap: "<<endl;
    cout<<"a= "<<a<<" b= "<<b<<endl;
    cout<<"c= "<<c<<" d= "<<d<<endl;
    cout<<"e= "<<e<<" f= "<<f<<endl;
    return 0;

}