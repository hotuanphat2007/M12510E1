#include <iostream>
using namespace std;

template<class T>
class Calculator {
    T num1, num2;
public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayResult() {
        cout << "Numbers: " << num1 << " and " << num2 << endl;
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: " << divide() << endl;
    }

    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
};

int main() {
    Calculator<int> calc1(10, 2);
    Calculator<float> calc2(5.5, 1.5);

    cout << "Integer Calculator:" << endl;
    calc1.displayResult();

    cout << "\nFloat Calculator:" << endl;
    calc2.displayResult();

    return 0;
}