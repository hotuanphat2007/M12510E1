#include <iostream> 
using namespace std; 

template <typename T> 
T absVal(T &a) {
    if (a <0 ) {
        return -a;
    }
    return a;
}

int main () {
    int x = -10;
    cout << "Absolute of " << x << " is " << absVal(x) << endl;

    float y =-15.75;
    float orginalValue1 = y;
    absVal(y);
    cout << "Absolute of " << y << " is " << absVal(y) << endl;

}