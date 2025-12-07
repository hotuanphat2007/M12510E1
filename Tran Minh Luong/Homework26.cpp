#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    try {
        int age;
        cout << "Enter your age: ";
        cin >> age;
        if (age < 0 || age > 120)
            throw out_of_range("Invalid age! Age must be between 0 and 120.");
        cout << "Valid age\n";
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << "\n";
    }
return 0;
}
