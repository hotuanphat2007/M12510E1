//Tạo class Box bao gồm dài rộng cao
//Overload == và < để so sánh thể tích
#include <iostream>
using namespace std;
class Box
{
    private:
        double length, width, height;
    public:
        Box():length(0),width(0),height(0){}
        Box(double chieudai,double chieurong,double chieucao):length(chieudai),width(chieurong),height(chieucao){}
        bool operator==(const Box &a)
        {
            return length*width*height == a.length*a.width*a.height;
        }
        bool operator<(const Box &a)
        {
            return length*width*height<a.length*a.width*a.height;
        }
};
int main()
{
    double a1, b1, c1, a2,b2,c2;
    Box h1, h2;
    cout<<"Nhap vao chieu dai,rong va cao cua Box 1: "<<endl;
    cin>>a1>>b1>>c1;
    cout<<"Nhap vao chieu dai, rong va cao cua Box 2: "<<endl;
    cin>>a2>>b2>>c2;
    Box k1(a1,b1,c1), k2(a2,b2,c2);
    if (k1<k2)
    {
        cout<<"Box 1 nho hon box 2"<<endl;
    }
    else if (k1==k2)
    {
        cout<<"Box 1 va box 2 bang nhau"<<endl;
    }
    else
    {
        cout<<"Box 1 lon nho box 2"<<endl;
    }
    return 0;
}