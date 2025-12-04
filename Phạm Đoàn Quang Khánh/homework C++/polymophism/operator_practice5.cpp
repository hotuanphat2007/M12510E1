#include <iostream>
#include <cstring>
using namespace std;
class Person
{
    private:
        char *p;
    public:
        Person()
        {
            p=new char[1];
            *p='\0'; //NULL
        }
        Person(const char* name)
        {
            p=new char[strlen(name)+1]; //+1 cho null sau chuoi
            strcpy(p,name);
        }
        //Deep copy
        Person(const Person &k)
        {
            p=new char[strlen(k.p)+1];  //+1 cho null sau chuoi
            strcpy(p,k.p);
        }
        Person operator=(const Person &t)
        {
            if(this != &t) //kiem tra de tranh truong hop xoa bo nho cua chinh no
            {
                delete[] p; //khi copy thì nếu th cũ đã có giá trị, nó sẽ được cấp phát 1 vùng nhớ mới (bên dưới) và nếu không free thì nó vẫn tồn tại nhưng mất địa chỉ -> memory leak
                p= new char[strlen(t.p)+1];  //Nếu không kiểm tra thì lỡ dòng delete xoá chính nó, sau đó đọc độ dài chính nó kh có j sẽ gây crash
                strcpy(p,t.p);
            }
            return *this;
        }
        void show()
        {
            cout<<"Name: "<<p<<endl;
        }
};
int main()
{
    Person p1("Khanh");
    Person p2("PhamDoanQuangKhanh");
    p2=p1; //p2.operator=(p1)
    p1.show();
    p2.show();
    return 0;
}