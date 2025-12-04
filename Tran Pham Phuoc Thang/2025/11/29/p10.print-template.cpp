// Create a class template Printer<T> with a print() function. Specialize it for string to print in quotes.
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Printer
{
public:
    void print(T value)
    {
        cout << value << endl;
    }
};

template <>
class Printer<string>
{
public:
    void print(string value)
    {
        cout << "\"" << value << "\"" << endl;
    }
};

int main()
{
    Printer<int> intPrinter;
    int intValue = 42;
    cout << "Printing int: ";
    intPrinter.print(intValue);

    Printer<float> floatPrinter;
    float floatValue = 3.14f;
    cout << "Printing float: ";
    floatPrinter.print(floatValue);

    Printer<string> stringPrinter;
    string stringValue = "Hello, World!";
    cout << "Printing string: ";
    stringPrinter.print(stringValue);

    return 0;
}