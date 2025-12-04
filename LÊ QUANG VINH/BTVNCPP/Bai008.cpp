#include <iostream>
using namespace std;

template <typename T>
void swaps(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a =5, b = 3;
    float c = 5.5, d = 6.5;
    swaps(a, b);
    swaps(c, d);
    cout << "a = " << a << " b = " << b << endl;
    cout << "c = " << c << " d = " << d << endl;
}