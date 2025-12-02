#include <iostream>
using namespace std;
int main()
{
    float f1=3.14f;
    double d1= 2.718;
    long double ld1=1.414L;
    float sci = 1.5e2f;
    double neg_exp = 2.5E-3;
    cout << f1 <<" "<< d1 <<" "<<ld1 << endl;
    cout << sci <<" "<<neg_exp<< endl;
    return 0;
}