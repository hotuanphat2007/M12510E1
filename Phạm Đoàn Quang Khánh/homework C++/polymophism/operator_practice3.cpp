//Tạo 1 class student với tên và điểm số
//Overload cin và cout 
#include <iostream>
using namespace std;
class Student 
{
    private:
        string name;
        float mark;
    public:
        Student():name(""), mark(0){}
        //Student(string ten,  float diem): name(ten), mark(diem){}
        friend istream& operator>>(istream& dauvao, Student &k)
        {
            cout<<"Nhap vao ten cua Sinh vien: ";
            //cin.ignore();
            getline(dauvao,k.name);
            cout<<"Nhap vao diem cua Sinh vien: ";
            dauvao>>k.mark;
            cin.ignore();
            return dauvao;
        }
        friend ostream& operator<<(ostream& daura, Student &p)
        {
            daura<<"Ten sinh vien la: "<<p.name<<" va diem so la: "<<p.mark<<endl;
            return daura;
        }
};
int main()
{
    Student s1, s2;
    cin>>s1>>s2;
    cout<<s1<<s2;
    return 0;
}