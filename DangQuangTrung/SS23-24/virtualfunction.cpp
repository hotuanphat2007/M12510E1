#include <iostream>
using namespace std;
 class shape
{
    public: virtual void draw()=0;
    virtual ~shape(){}
};
class circle : public shape
{
    public: void draw() override
    {
        cout << "Circle !!!";
    }
};
 class rectangle : public shape{
    public: void draw() override 
    {
        cout << "Retangle !!!";
    }
 };
 int main ()
 {
    shape*s1 = new circle();
    shape*s2 = new rectangle();
    s1 ->draw();
    s2 ->draw();
    delete s1;
    delete s2;
    return 0;
 }
