#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b, T c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main()
{
    int intA = 10, intB = 20, intC = 15;
    cout << "Max of " << intA << ", " << intB << ", " << intC << " is: " << findMax(intA, intB, intC) << endl;

    float floatA = 5.5f, floatB = 2.3f, floatC = 9.8f;
    cout << "Max of " << floatA << ", " << floatB << ", " << floatC << " is: " << findMax(floatA, floatB, floatC) << endl;

    char charA = 'A', charB = 'Z', charC = 'M';
    cout << "Max of '" << charA << "', '" << charB << "', '" << charC << "' is: '" << findMax(charA, charB, charC) << "'" << endl;

    return 0;
}