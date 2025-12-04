#include <iostream>
using namespace std;

class Employee {
public:
    virtual void showInfo() {
        cout << "Employee info\n";
    }
};

class Manager : public Employee {
public:
    void showInfo() override {
        cout << "Manager info\n";
    }
};

class Director : public Manager {
public:
    void showInfo() override {
        cout << "Director info\n";
    }
};

void print(Employee* e) {
    e->showInfo();    // gọi đúng hàm tùy đối tượng thật
}

int main() {
    Employee e;
    Manager m;
    Director d;

    print(&e);  // Employee info
    print(&m);  // Manager info
    print(&d);  // Director info
    return 0;
}
