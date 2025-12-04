// Create template function to check if two values are equal
#include <iostream>
using namespace std;

template <typename T>
bool isEqual(T a, T b)
{
    return a == b;
}

int main()
{
    int intA = 5, intB = 5;
    cout << "Are " << intA << " and " << intB << " equal? " << (isEqual(intA, intB) ? "Yes" : "No") << endl;

    float floatA = 3.14f, floatB = 2.71f;
    cout << "Are " << floatA << " and " << floatB << " equal? " << (isEqual(floatA, floatB) ? "Yes" : "No") << endl;

    char charA = 'X', charB = 'X';
    cout << "Are '" << charA << "' and '" << charB << "' equal? " << (isEqual(charA, charB) ? "Yes" : "No") << endl;

    return 0;
}