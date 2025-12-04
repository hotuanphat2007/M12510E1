#include <iostream>
#include <math.h>
using namespace std;

template <typename T>
void absVal(T &number)
{
    T temp = abs(number);
    cout << "Absolute of " << number << " is: " << temp << endl;
}
int main()
{     
    int x = -10;
    float y = -15.75;
    float b = 12.345;
    int c = -99999;

    absVal(x);
    absVal(y);
    absVal(b);
    absVal(c);
    return 0;

}