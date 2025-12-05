#include <iostream> 
using namespace std; 

template <typename T> 
void swapVal (T &a, T &b) {
    if (a>b) {cout << a << " " << b << endl;}
    else {cout << b << " " << a<< endl;}
}

int main () {
    int x=5,y=10;
    swapVal(x,y);
    cout << x << " " << y << endl;
    return 0;
}