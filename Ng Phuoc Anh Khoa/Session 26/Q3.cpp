#include <iostream> 
using namespace std; 

int main () {
    int age; 
    cout << "Enter age: "; 
    cin >> age;
    try
    {
        if (age < 1 || age > 119) {
            throw age;
        }
        else {
            cout << "Valid age";   
        }
        
    }
    catch(int e)
    {
        cout << "Invalid age" ;
    }
    return 0;
    
}