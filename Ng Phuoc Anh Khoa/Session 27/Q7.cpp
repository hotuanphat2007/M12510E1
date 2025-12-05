#include <iostream>
using namespace std;

template <typename T> 
class Calculator {
    T num1,num2; 
public: 
    Calculator (T n1, T n2) {
        num1 =n1;
        num2 =n2;
    }

    void displayResults() {
        cout <<"Number1: " << num1 << " " << "Number2: " << num2 << endl;
        cout <<"Addition: "<< add() << endl;
        cout <<"Subtraction: "<< subtract() << endl;
        cout <<"Multiplication: "<< multiply() << endl;
        cout <<"Division: " << divide() << endl;
    }
    T add () {
        return num1+num2;
    }
    T subtract() {
        return num1-num2;
    }
    T multiply() {
        return num1*num2;
    }
    T divide() {
        return num1/num2;
    }
};

int main () {
    Calculator<int> c1(5,2);
    c1.displayResults();
    return 0;
}