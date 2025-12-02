#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    float marks;
public:
    Student() : name(""), marks(0) {}
    friend istream &operator>>(istream &input, Student &s);
    friend ostream &operator<<(ostream &output, const Student &s);
};
istream &operator>>(istream &input, Student &s)
{
    cout << "Enter name: ";
    input >> s.name;
    cout << "Enter marks: ";
    input >> s.marks;
    return input;
}
ostream &operator<<(ostream &output, const Student &s)
{
    output << "Name: " << s.name << ", marks: " << s.marks;
    return output;
}
int main()
{
    Student s;
    cin >> s;
    cout << s << endl;
    return 0;
}