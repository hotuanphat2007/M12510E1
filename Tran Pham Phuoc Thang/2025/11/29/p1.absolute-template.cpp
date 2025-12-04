// Write a template function absVal() that returns the absolute value of a given number (int or float).
#include <iostream>

using namespace std;

template <typename T>
T absVal(T val)
{
    return abs(val);
}

int main()
{
    int input;
    cout << "Input: ";
    cin >> input;
    int result = absVal(input);

    cout << "Absolute of " << input << " is: " << result << endl;
    return 0;
}