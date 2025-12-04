// Write a varadic template function printAll() that print all arguments.
#include <iostream>
using namespace std;

template <typename T>
void print(T value)
{
    cout << value << endl;
}

template <typename T, typename... Args>
void print(T first, Args... rest)
{
    cout << first << " ";
    print(rest...);
}

int main()
{
    cout << "Print all value: ";
    print(1, 2, 3, 4.3, 'A');
    return 0;
}