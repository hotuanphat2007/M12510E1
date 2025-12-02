//Viết 1 chtrinh cho phép nhập vào bất kì kiểu số nào (int, float,...) âm/dương sau đó trị tuyệt đối nó
#include <iostream>
using namespace std;
template <typename T>
class Number
{
    private:
        T so;
        T sogoc;
    public:
        Number(T num): so(num), sogoc(num){}
        T trituyetdoi()
        {
            if (so<0)
            {
                so = so * (-1);
            }
            return so;
        }
        void show()
        {
            cout<<"Tri tuyet doi cua "<<sogoc<<" la: "<<so;
        }
};
int main()
{
    double so;
    cout<<"Hay nhap vao 1 so bat ki: ";
    cin>>so;
    Number a1(so);
    a1.trituyetdoi();
    a1.show();
    return 0;
}