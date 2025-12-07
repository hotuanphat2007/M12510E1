#include <iostream>
#include <cstring>
using namespace std;
class Person {
private:
    char* name;
public:
    Person() {
        name = new char[1];
        name[0] = '\0';
    }
    Person(const char* n) {
        if (!n) n = "";
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    Person(const Person& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }
    Person& operator=(const Person& other) {
        if (this == &other) return *this;
        delete[] name;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        return *this;
    }
    ~Person() {
        delete[] name;
    }
    void setName(const char* n) {
        if (!n) n = "";
        delete[] name;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    void print() const {
        cout << "Person{name=\"" << name << "\"}\n";
    }
};
int main() {
    Person p1("Alice");
    Person p2;
    p2 = p1;
    p1.setName("Alice Changed");
    cout << "p1: "; p1.print();
    cout << "p2: "; p2.print();
return 0;
}
