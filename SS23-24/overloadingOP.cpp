#include <iostream>
using namespace std;
class Student
{
    private:
    string name;
    int mark;
    public:
    Student():name(""), mark(0) {}
    friend istream& operator >> (istream &in, Student &s);
    friend ostream& operator << (ostream &out, const Student &s);
};

istream& operator >> (istream &in, Student &s)
{
    cout << "Enter name: ";
    in >> s.name;
    cout << "Enter mark: ";
    in >> s.mark;
    return in;
}

ostream& operator <<(ostream &out, const Student &s)
{
    cout << "Name: "<<s.name<<", Marks: "<< s.mark;
    return out;
}
int main()
{
    Student s;
    cin >> s;
    cout << s<<endl;
    return 0;
}