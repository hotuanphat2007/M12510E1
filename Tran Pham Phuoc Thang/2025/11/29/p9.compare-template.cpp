// Make a class template Compare<T> that compares two values of type T and returns the larger one.
#include <iostream>
using namespace std;

template <typename T>
class Compare
{
public:
    T getLarger(T a, T b)
    {
        return (a > b) ? a : b;
    }
};

int main()
{
    Compare<int> intCompare;
    int intA = 10, intB = 20;
    cout << "Larger of " << intA << " and " << intB << " is: " << intCompare.getLarger(intA, intB) << endl;

    Compare<float> floatCompare;
    float floatA = 5.5f, floatB = 2.3f;
    cout << "Larger of " << floatA << " and " << floatB << " is: " << floatCompare.getLarger(floatA, floatB) << endl;

    Compare<char> charCompare;
    char charA = 'A', charB = 'Z';
    cout << "Larger of '" << charA << "' and '" << charB << "' is: '" << charCompare.getLarger(charA, charB) << "'" << endl;

    return 0;
}