// Write a template function display() for any type. Specialize it for char to print its ASCII value.
#include <iostream>
using namespace std;

template <typename T>
void display(T input)
{
    cout << "Display: " << input << endl;
}

template <>
void display<char>(char input)
{
    cout << "Displaying char '" << input << "' as ASCII: " << static_cast<int>(input) << endl;
}

int main()
{
    int intValue = 42;
    float floatValue = 3.14f;
    char charValue = 'A';

    display(intValue);   // Calls the generic template
    display(floatValue); // Calls the generic template
    display(charValue);  // Calls the specialized template for char

    return 0;
}