#include <iostream>
using namespace std;
template <typename T>
class Box
{
    private:
        T item;
    public:
        Box(T it=0): item(it){}
        void setitem(T itemmm)
        {
            item=itemmm;
        }
        T getitem()
        {
            return item;
        }
};
int main()
{
    int a=5;
    float b=6.9;
    Box<int>b1;
    b1.setitem(a);
    cout<<"Iteam trong box b1 la: "<<b1.getitem()<<endl;
    Box<float>b2(b);
    cout<<"Iteam trong box b2 la: "<<b2.getitem()<<endl;
}