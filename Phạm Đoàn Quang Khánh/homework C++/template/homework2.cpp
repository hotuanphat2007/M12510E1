//Viết chtrinh phân biệt dạng số nhập vào (int hay float) và dùng template đặc biệt cho string
#include<iostream>
#include<string>
using namespace std;
template <typename T>
void display(T val)
{
    //typeid(val).name là cú pháp ghi ra kiểu dữ liệu của val
    cout<<"Ban dang nhap 1 so kieu "<<typeid(val).name()<<" la: "<<val<<endl;
}
template <>
void display<char>(char val)
{
    cout<<"Ban dang nhap chu cai "<<val<<" co ma ASCII la: "<<(int)val<<endl;
}
int main()
{
    display('A');
    display(3.3);
    display(5);
    return 0;
}
