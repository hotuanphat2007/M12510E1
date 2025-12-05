#include <iostream>
using namespace std; 

int main () {
    int x,y,result; 
    cout << "Nhap so x: "; 
    cin >> x;
    cout << "Nhap so y: ";
    cin >> y;
    try
    {
        if (y == 0 ) {
            throw y;
        }
        result = x /y;
    }
    catch(int e)
    {
        cout << "Exception: Divide by zero is not allowed: " << e << endl;
    }
    cout << "Result is: " << result;
    return 0;
}