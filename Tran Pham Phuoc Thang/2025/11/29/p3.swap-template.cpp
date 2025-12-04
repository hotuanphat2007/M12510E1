#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int intA = 5, intB = 10;
    cout << "Before swap (int): a = " << intA << ", b = " << intB << endl;
    swapValues(intA, intB);
    cout << "After swap (int): a = " << intA << ", b = " << intB << endl;

    float floatA = 1.5f, floatB = 2.5f;
    cout << "Before swap (float): a = " << floatA << ", b = " << floatB << endl;
    swapValues(floatA, floatB);
    cout << "After swap (float): a = " << floatA << ", b = " << floatB << endl;

    char charA = 'X', charB = 'Y';
    cout << "Before swap (char): a = " << charA << ", b = " << charB << endl;
    swapValues(charA, charB);
    cout << "After swap (char): a = " << charA << ", b = " << charB << endl;

    return 0;
}