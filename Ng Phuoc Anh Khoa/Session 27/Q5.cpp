#include <iostream> 
using namespace std;

template <typename T> 
void isEqual(T &a,T &b) {
    if (a != b) {
        cout << "False" << endl;
    }
    else {
        cout << "True" << endl;
    }
}

int main () {
    int x,y;
    cout <<"Nhap x: " ;
    cin >> x;
    cout <<"Nhap y: ";
    cin >> y;
    isEqual(x,y);
    return 0;
}