// Define a class for a simple calculator
#include <iostream>
using namespace std;

template <typename T>
class Calculator
{
public:
    T add(T a, T b)
    {
        return a + b;
    }
    T subtract(T a, T b)
    {
        return a - b;
    }
    T multiply(T a, T b)
    {
        return a * b;
    }
    T divide(T a, T b)
    {
        if (b == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return T(); // Return default value of T
        }
        return a / b;
    }
};

int main()
{
    Calculator<int> intCalc;
    int intA = 10, intB = 5;
    cout << "Integer Operations:" << endl;
    cout << intA << " + " << intB << " = " << intCalc.add(intA, intB) << endl;
    cout << intA << " - " << intB << " = " << intCalc.subtract(intA, intB) << endl;
    cout << intA << " * " << intB << " = " << intCalc.multiply(intA, intB) << endl;
    cout << intA << " / " << intB << " = " << intCalc.divide(intA, intB) << endl;

    Calculator<float> floatCalc;
    float floatA = 10.5f, floatB = 2.5f;
    cout << "\nFloat Operations:" << endl;
    cout << floatA << " + " << floatB << " = " << floatCalc.add(floatA, floatB) << endl;
    cout << floatA << " - " << floatB << " = " << floatCalc.subtract(floatA, floatB) << endl;
    cout << floatA << " * " << floatB << " = " << floatCalc.multiply(floatA, floatB) << endl;
    cout << floatA << " / " << floatB << " = " << floatCalc.divide(floatA, floatB) << endl;

    return 0;
}