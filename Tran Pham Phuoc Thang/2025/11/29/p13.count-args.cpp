// Write a variadic function to count passed args
#include <iostream>
using namespace std;

template <typename T>
int countArgs(T value)
{
    return 1;
}

template <typename T, typename... Args>
int countArgs(T first, Args... rest)
{
    return 1 + countArgs(rest...);
}

int main()
{
    int count = countArgs(1, 2.5, 'A', "Hello", 10);
    cout << "Number of arguments: " << count << endl;
    return 0;
}