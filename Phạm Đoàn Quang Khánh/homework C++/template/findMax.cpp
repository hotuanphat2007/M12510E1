#include <iostream>
using namespace std;
template<typename T>
T findMax(T &a,T &b,T &c )
{
    T max=(a>b)?
            (a>c)?a:c
            :(b>c)?b:c;
    return max;
}
int main()
{
    int a, b, c;
    float d, e, f;
    cout<<"Nhap vao 3 so nguyen: "<<endl;
    cin>>a>>b>>c;
    cout<<"Nhap vao 3 so thuc: "<<endl;
    cin>>d>>e>>f;
    cout<<"So nguyen lon nhat la: "<<findMax(a,b,c)<<endl;
    cout<<"So thuc lon nhat la: "<<findMax(d,e,f)<<endl;
    return 0;
}