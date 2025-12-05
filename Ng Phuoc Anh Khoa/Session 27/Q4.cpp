#include <iostream> 
using namespace std; 

template <typename T> 
T findMax(T &a,T &b,T &c) {
    return (a>b)?((a>c)?a:c)
                :((b>c)?b:c);
}

int main () {
    int x=5,y=6,z=9; 
    cout << "Max value of three value: " << findMax(x,y,z) << endl;
    return 0;
}