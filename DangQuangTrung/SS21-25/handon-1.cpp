#include <iostream>
using namespace std;

class Employee {
protected:
    int empId;
    string name;
    string role;

public:
    virtual void input() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Role: ";
        getline(cin, role);
    }

    virtual void displayDetails() {
        cout << "Employee ID: " << empId << endl;
        cout << "Name       : " << name << endl;
        cout << "Role       : " << role << endl;
    }
};

class Manager : public Employee {
protected:
    string department;

public:
    void input() override {
        Employee::input();  // nhập thông tin cơ bản

        cout << "Enter Department: ";
        getline(cin, department);
    }

    void displayDetails() override {
        Employee::displayDetails();
        cout << "Department : " << department << endl;
    }
};

class Director : public Manager {
private:
    int reportees;

public:
    void input() override {
        Manager::input();

        cout << "Enter number of reportees: ";
        cin >> reportees;
        cin.ignore();
    }

    void displayDetails() override {
        Manager::displayDetails();
        cout << "Reportees  : " << reportees << endl;
    }
};

int main() {
    Director d;
    cout << "=== Enter Director Information ===" << endl;
    d.input();

    cout << "\n=== Director Details ===" << endl;
    d.displayDetails();

    Manager m;
    cout << "=== Enter Manager Information ===" << endl;
    m.input();

    cout << "\n=== Manager Details ===" << endl;
    m.displayDetails();

    Employee e;
    cout << "=== Enter Employee Information ===" << endl;
    e.input();

    cout << "\n=== Employee Details ===" << endl;
    e.displayDetails();
    return 0;
}
