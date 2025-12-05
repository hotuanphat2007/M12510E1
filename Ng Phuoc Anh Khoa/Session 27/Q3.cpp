#include <iostream> 
using namespace std;

template <typename T>
void swapValues(T &a,T &b) {
    T temp = a; 
    a = b ;
    b = temp;
}

int main () {
    int a=5,b=10;
    float x=1.25,y=2.35;

    swapValues(a,b);
    swapValues(x,y);

    cout << "a = " << a << " b = " << b << endl;
    cout << "x = " << x << " y = " << y << endl;
    return 0;  
}