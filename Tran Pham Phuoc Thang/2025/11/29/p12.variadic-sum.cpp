#include <iostream>
using namespace std;

template <typename T>
T sum(T total, T a)
{
    return total += a;
}

template <typename T, typename... Rest>
T sum(T total, T first, Rest... rest)
{
    total += first;
    return sum(total, rest...);
}

int main()
{
    int total = 0;
    int result = sum(1, 2, 3, 4, 5);
    cout << "Sum: " << result << endl;
    return 0;
}