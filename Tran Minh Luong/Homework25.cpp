#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    try {
        double a, b;
        cout << "Enter numerator: ";
        cin >> a;
        cout << "Enter denominator: ";
        cin >> b;
        if (b == 0) throw runtime_error("Cannot divide by zero!");
        cout << "Result: " << (a / b) << "\n";
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << "\n";
    }
return 0;
}