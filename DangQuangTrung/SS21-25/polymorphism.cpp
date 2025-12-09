#include <iostream>
using namespace std;

class base
{
    public:
    virtual void show()
    {
        cout << "base class show fuction" <<endl;
    }
};

class Derived : public base
{
    public:
    void show() override
    {
        cout << "derived class show fuction"<<endl;
    }
};
int main()
{
    Derived d;
    d.show();
    return 0;

}