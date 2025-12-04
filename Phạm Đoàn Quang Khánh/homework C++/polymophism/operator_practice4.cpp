#include <iostream>
using namespace std;
class Counter
{
    int val;
    public:
        Counter():val(0){}
        Counter(int i):val(i){}
        Counter& operator++() //++p
        {
            ++val;
            return *this;
        }
        Counter operator++(int s)//p++
        {
            Counter temp=*this;
            val=val+1;
            return temp;
        }
        void display()
        {
            cout<<val<<endl;;
        }
};
int main()
{
    cout<<"Nhap vao 1 so: ";
    int so;
    cin>>so;
    Counter p(so);
    // Counter k=++p;
    // Counter t=p++;
    cout<<"Gia tri p truoc khi ++ ";
    p.display();
    Counter k=++p;  
    cout<<"Gia tri ++p la: ";
    k.display();
    Counter t=p++;
    cout<<"Gia tri p++ la: ";
    t.display();
    cout<<"Gia tri cua p sau khi ++ la: ";
    p.display();
    return 0;
    
}