#include <iostream>
using namespace std;
class Employee 
{
    private:
        int empId;
        string empName;
        string empRole;
    public:
        Employee(int id, const string& name, const string& role) 
        : empId(id), empName(name), empRole(role) {}
            
        void displayDetails()
            {
            cout << "Employee ID: " << empId << endl;
            cout << "Employee Name: " << empName << endl;
            cout << "Employee Role: " << empRole << endl;
            }
};

class Manager : public Employee
{
    private:
        string department;
    public:
        Manager(int id, const string &name, const string &role, const string &depart) 
        :Employee(id, name, role), department(depart) {}
        void displayDetails()
            {
                Employee::displayDetails();
                cout << "Department Managed by Manager: " << department << endl;
            }
};

class Director : public Manager
{
    private:
        int reportees;
    public:
        Director(int id, const string &name, const string &role, const string &depart, int report) 
        :Manager(id, name, role, depart), reportees(report) {}
    void displayDetails()
        {
            Manager::displayDetails();
            cout <<"Reportees Managed by Director: " << reportees << endl;
        }
};

int main()
{
    Employee employee_1(1,"Nô lệ số 1", "Bán mình cho tư bản");
    employee_1.displayDetails();
    cout << "-------------------" << endl;
    Manager employee_2(23, "Quản lý Nô lệ", "Bán mình cho tư bản version 2", "Just kidding");
    employee_2.displayDetails();
    cout << "------------------" << endl;
    Director employee_3(3, "Tư bản chủ nghĩa", "Tổng tài cao", "1800m",10000000);
    employee_3.displayDetails();
    cout << "------------------" << endl;
    return 0;
}
