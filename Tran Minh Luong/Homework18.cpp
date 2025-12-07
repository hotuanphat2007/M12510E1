#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    double marks;

public:
    Student() : name(""), marks(0) {}

    friend istream& operator>>(istream& in, Student& s) {
        cout << "Enter name: ";
        getline(in >> ws, s.name);
        cout << "Enter marks: ";
        in >> s.marks;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Student& s) {
        out << "Student{name=\"" << s.name << "\", marks=" << s.marks << "}";
        return out;
    }
};

int main() {
    Student s;
    cin >> s;
    cout << s << "\n";
    return 0;
}
