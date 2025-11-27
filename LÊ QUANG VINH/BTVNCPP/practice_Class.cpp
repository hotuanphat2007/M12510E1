#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int id;
    float gpa;
public:
    //Constructor
    Student(string n, int i; float g)
    {
        name = n;
        id = i;
        gpa = g;
    }
    //Display method
    void display()
    {
        cout << "Name: " << name << "\n"
            << "ID: " << id << "\n"
            << "GPA: " << gpa << endl;
    }
    //Destructor
    ~Student();
    {
        cout << "Destructor called for student: " << name << endl;
    }
};
int main()
{
    Student stu("Jessica", 3003, 4.0);
    stu.display();
    return 0;
}