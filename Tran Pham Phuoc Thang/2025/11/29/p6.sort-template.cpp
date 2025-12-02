// Write a template that sorts two values in ascending order
#include <iostream>
using namespace std;

template <typename T>
void sortValues(T &a, T &b)
{
    if (a > b)
    {
        T temp = a;
        a = b;
        b = temp;
    }
}

int main()
{
    int intA = 20, intB = 10;
    cout << "Before sort (int): a = " << intA << ", b = " << intB << endl;
    sortValues(intA, intB);
    cout << "After sort (int): a = " << intA << ", b = " << intB << endl;

    float floatA = 5.5f, floatB = 2.3f;
    cout << "Before sort (float): a = " << floatA << ", b = " << floatB << endl;
    sortValues(floatA, floatB);
    cout << "After sort (float): a = " << floatA << ", b = " << floatB << endl;

    char charA = 'Z', charB = 'A';
    cout << "Before sort (char): a = '" << charA << "', b = '" << charB << "'" << endl;
    sortValues(charA, charB);
    cout << "After sort (char): a = '" << charA << "', b = '" << charB << "'" << endl;

    return 0;
}