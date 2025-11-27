#include <iostream>
using namespace std;

struct Employee
{
    string name;
    string id;
    int salary;
};
struct Company
{
    string name;
    Employee employee;
};
int main()
{
    Company comp;
    cout << "Enter company name: ";
    getline(cin, comp.name);
    cout << "Enter employee ID: ";
    cin >> comp.employee.id;
    cin.ignore();
    cout << "Enter employee name: ";
    getline(cin, comp.employee.name);
    cout << "Enter employee salary: ";
    cin >> comp.employee.salary;
    cin.ignore();
    cout << "---Company and Employee Details---" << endl;
    cout << "Company Name: " << comp.name << endl;
    cout << "Employee ID: " << comp.employee.id << endl;
    cout << "Employee Name: " << comp.employee.name << endl;
    cout << "Employee Salary: " << comp.employee.salary << endl;
    return 0;
}