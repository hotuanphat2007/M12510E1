#include <iostream>
using namespace std;
template <typename T>
T absVal(T x) {
    return (x < 0) ? -x : x;
}
int main() {
    cout << "Absolute of -10 is: " << absVal(-10) << "\n";
    cout << "Absolute of -15.75 is: " << absVal(-15.75) << "\n";
    cout << "Absolute of 12.345 is: " << absVal(12.345) << "\n";
    cout << "Absolute of -99999 is: " << absVal(-99999) << "\n";
    return 0;
}
