#include <iostream>
using namespace std;

template<typename T>

T absVal(T num){
    return (num < 0) ? -num : num;
}


int main(){
    cout << "Absolute of -10 is: " << absVal(-10) << endl;
    cout << "Absolute of -15.75 is: " << absVal(-15.75f) << endl;
    cout << "Absolute of 12.345 is: " << absVal(12.345) << endl;
    cout << "Absolute of -99999 is: " << absVal(-99999) << endl;

    return 0;
}